// pinos do sensor hc sr04
// nodemcu só alimenta até 3.3v o sensor é de 5v
// ou coloca-se um conversor de alimentação no circuito
// ou alimenta-se o sensor com fonte externa.
#define TRIGGER_PIN D1
#define ECHO_PIN D2

// leds para indicar nível de aproximação
// do mais próximo para o mais longe
#define LED_RED_PIN D5
#define LED_YELLOW_PIN D6
#define LED_BLUE_PIN D7
#define LED_GREEN_PIN D8


// marcos de distância para as cores
// se precisar alterar as distâncias só alterar aqui

#define DIST_RED_CM 6 
#define DIST_YELLOW_CM 12
#define DIST_BLUE_CM 18
#define DIST_GREEN_CM 24


int distancia;

void setup()
{

  setandoPinos();

  Serial.begin(115200);
}

void loop()
{

  distancia = (0.01723 * readUltrasonicDistance(TRIGGER_PIN, ECHO_PIN));
  Serial.println(distancia);
  acendendoLeds(distancia);
}

void acendendoLeds(int dist)
{
  if (dist > 0 && dist <= DIST_RED_CM)
  {
    digitalWrite(LED_GREEN_PIN, HIGH);
    digitalWrite(LED_BLUE_PIN, HIGH);
    digitalWrite(LED_YELLOW_PIN, HIGH);
    digitalWrite(LED_RED_PIN, HIGH);
  }
  else
  {
    if (dist > DIST_RED_CM && dist <=  DIST_YELLOW_CM)
    {
      digitalWrite(LED_GREEN_PIN, HIGH);
      digitalWrite(LED_BLUE_PIN, HIGH);
      digitalWrite(LED_YELLOW_PIN, HIGH);
      digitalWrite(LED_RED_PIN, LOW);
    }
    else
    {
      if (dist > DIST_YELLOW_CM && dist <= DIST_BLUE_CM)
      {
        digitalWrite(LED_GREEN_PIN, HIGH);
        digitalWrite(LED_BLUE_PIN, HIGH);
        digitalWrite(LED_YELLOW_PIN, LOW);
        digitalWrite(LED_RED_PIN, LOW);
      }
      else
      {
        if (dist > DIST_BLUE_CM && dist <= DIST_GREEN_CM)
        {
          digitalWrite(LED_GREEN_PIN, HIGH);
          digitalWrite(LED_BLUE_PIN, LOW);
          digitalWrite(LED_YELLOW_PIN, LOW);
          digitalWrite(LED_RED_PIN, LOW);
        }
        else
        {
          digitalWrite(LED_GREEN_PIN, LOW);
          digitalWrite(LED_BLUE_PIN, LOW);
          digitalWrite(LED_YELLOW_PIN, LOW);
          digitalWrite(LED_RED_PIN, LOW);
        }
      }
    }
  }
}

void setandoPinos()
{
  pinMode(TRIGGER_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  digitalWrite(TRIGGER_PIN, LOW);

  pinMode(LED_BLUE_PIN, OUTPUT);
  pinMode(LED_GREEN_PIN, OUTPUT);
  pinMode(LED_RED_PIN, OUTPUT);
  pinMode(LED_YELLOW_PIN, OUTPUT);
}

long readUltrasonicDistance(int TRIGGER_PIN, int ECHO_PIN)
{
  pinMode(TRIGGER_PIN, OUTPUT); // Clear the trigger
  digitalWrite(TRIGGER_PIN, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(TRIGGER_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGGER_PIN, LOW);
  pinMode(ECHO_PIN, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(ECHO_PIN, HIGH);
}
