
#define ECHO_PIN 2
#define TRIGGER_PIN 3

#define BUZZ_PIN 4

// leds para indicar nível de aproximação
// do mais próximo para o mais longe
#define LED_RED_PIN 5
#define LED_YELLOW_PIN 6
#define LED_BLUE_PIN 7
#define LED_GREEN_PIN 8

// marcos de distância para as cores
// se precisar alterar as distâncias só alterar aqui

#define DIST_RED_CM 6
#define DIST_YELLOW_CM 12
#define DIST_BLUE_CM 18
#define DIST_GREEN_CM 24

int distancia;
int frequencia = 2000;
int tempo = 500;

void setup()
{

    setandoPinos();

    Serial.begin(9600);
}

void loop()
{

    distancia = (0.01723 * readUltrasonicDistance());
    Serial.println(distancia);
    acendendoLeds(distancia);
}

void acendendoLeds(int dist)
{
    noTone(BUZZ_PIN);
    if (dist > 0 && dist <= DIST_RED_CM)
    {
        digitalWrite(LED_GREEN_PIN, HIGH);
        digitalWrite(LED_BLUE_PIN, HIGH);
        digitalWrite(LED_YELLOW_PIN, HIGH);
        digitalWrite(LED_RED_PIN, HIGH);

        tone(BUZZ_PIN, frequencia, tempo);
        delay(300);
    }
    else if (dist > DIST_RED_CM && dist <= DIST_YELLOW_CM)
    {
        digitalWrite(LED_GREEN_PIN, HIGH);
        digitalWrite(LED_BLUE_PIN, HIGH);
        digitalWrite(LED_YELLOW_PIN, HIGH);
        digitalWrite(LED_RED_PIN, LOW);

        tone(BUZZ_PIN, frequencia, tempo);
        delay(700);
    }
    else if (dist > DIST_YELLOW_CM && dist <= DIST_BLUE_CM)
    {
        digitalWrite(LED_GREEN_PIN, HIGH);
        digitalWrite(LED_BLUE_PIN, HIGH);
        digitalWrite(LED_YELLOW_PIN, LOW);
        digitalWrite(LED_RED_PIN, LOW);

        tone(BUZZ_PIN, frequencia, tempo);
        delay(1200);
    }
    else if (dist > DIST_BLUE_CM && dist <= DIST_GREEN_CM)
    {
        digitalWrite(LED_GREEN_PIN, HIGH);
        digitalWrite(LED_BLUE_PIN, LOW);
        digitalWrite(LED_YELLOW_PIN, LOW);
        digitalWrite(LED_RED_PIN, LOW);

        tone(BUZZ_PIN, frequencia, tempo);
        delay(1500);
    }
    else
    {
        digitalWrite(LED_GREEN_PIN, LOW);
        digitalWrite(LED_BLUE_PIN, LOW);
        digitalWrite(LED_YELLOW_PIN, LOW);
        digitalWrite(LED_RED_PIN, LOW);
    }
}

void setandoPinos()
{
    pinMode(TRIGGER_PIN, OUTPUT);
    pinMode(ECHO_PIN, INPUT);
    digitalWrite(TRIGGER_PIN, LOW);

    pinMode(BUZZ_PIN, OUTPUT);
    noTone(BUZZ_PIN);

    pinMode(LED_BLUE_PIN, OUTPUT);
    pinMode(LED_GREEN_PIN, OUTPUT);
    pinMode(LED_RED_PIN, OUTPUT);
    pinMode(LED_YELLOW_PIN, OUTPUT);
}

long readUltrasonicDistance()
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
