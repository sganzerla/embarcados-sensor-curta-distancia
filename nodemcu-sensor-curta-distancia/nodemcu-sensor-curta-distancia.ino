
#define TRIGGER_PIN D1
#define ECHO_PIN D2

#define LED_GREEN_PIN D8
#define LED_BLUE_PIN D7
#define LED_YELLOW_PIN D6
#define LED_RED_PIN D5

float distancia;

void setup()
{
  pinMode(TRIGGER_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  digitalWrite(TRIGGER_PIN, LOW);

  pinMode(LED_BLUE_PIN, OUTPUT);
  pinMode(LED_GREEN_PIN, OUTPUT);
  pinMode(LED_RED_PIN, OUTPUT);
  pinMode(LED_YELLOW_PIN, OUTPUT);

  Serial.begin(115200);
}

void loop()
{

  distancia = (0.01723 * readUltrasonicDistance(TRIGGER_PIN, ECHO_PIN));
  Serial.println(distancia);

  if (distancia > 0 && distancia <= 30)
  {
    digitalWrite(LED_GREEN_PIN, HIGH);
    digitalWrite(LED_BLUE_PIN, HIGH);
    digitalWrite(LED_YELLOW_PIN, HIGH);
    digitalWrite(LED_RED_PIN, HIGH);
  }
  else
  {
    if (distancia > 31 && distancia <= 100)
    {
      digitalWrite(LED_GREEN_PIN, HIGH);
      digitalWrite(LED_BLUE_PIN, HIGH);
      digitalWrite(LED_YELLOW_PIN, HIGH);
      digitalWrite(LED_RED_PIN, LOW);
    }
    else
    {
      if (distancia > 101 && distancia <= 160)
      {
        digitalWrite(LED_GREEN_PIN, HIGH);
        digitalWrite(LED_BLUE_PIN, HIGH);
        digitalWrite(LED_YELLOW_PIN, LOW);
        digitalWrite(LED_RED_PIN, LOW);
      }
      else
      {
        if (distancia > 161 && distancia <= 210)
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

  delay(10); // Delay a little bit to improve simulation performance
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
