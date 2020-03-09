/*
  Este programa faz com o Arduino meça a distância
  em cm, e para cada distância diferente ative
  LEDs indicativos de zona de alerta
*/

#define LED_BRANCO 12
#define LED_AMARELO 11
#define LED_VERDE 10
#define LED_AZUL 9
#define LED_VERMELHO 8

#define SENSOR_TRIGGER 3
#define SENSOR_ECHO 2

int distanciaApurada;

void setup()
{

    pinMode(LED_BRANCO, OUTPUT);
    pinMode(LED_AMARELO, OUTPUT);
    pinMode(LED_VERDE, OUTPUT);
    pinMode(LED_AZUL, OUTPUT);
    pinMode(LED_VERMELHO, OUTPUT); 
    Serial.begin(9600);
}

void loop()
{
    tone(0, 523, 1000); // play tone 60 (C5 = 523 Hz)
    distanciaApurada = (0.01723 * readUltrasonicDistance(SENSOR_TRIGGER, SENSOR_ECHO));
    Serial.println(distanciaApurada);
    // 0 a 70cm
    if (distanciaApurada > 0 && distanciaApurada <= 70) {
        digitalWrite(LED_BRANCO, HIGH);
        digitalWrite(LED_AMARELO, HIGH);
        digitalWrite(LED_VERDE, HIGH);
        digitalWrite(LED_AZUL, HIGH);
        digitalWrite(LED_VERMELHO, HIGH);
    }
    else {
        // 71 a 140cm
        if (distanciaApurada > 71 && distanciaApurada <= 140) {
            digitalWrite(LED_BRANCO, HIGH);
            digitalWrite(LED_AMARELO, HIGH);
            digitalWrite(LED_VERDE, HIGH);
            digitalWrite(LED_AZUL, HIGH);
            digitalWrite(LED_VERMELHO, LOW);
        }
        else {
            // 141 a 210cm
            if (distanciaApurada > 141 && distanciaApurada <= 210) {
                digitalWrite(LED_BRANCO, HIGH);
                digitalWrite(LED_AMARELO, HIGH);
                digitalWrite(LED_VERDE, HIGH);
                digitalWrite(LED_AZUL, LOW);
                digitalWrite(LED_VERMELHO, LOW);
            }
            else {
                // 211 a 280cm
                if (distanciaApurada > 210 && distanciaApurada <= 280) {
                    digitalWrite(LED_BRANCO, HIGH);
                    digitalWrite(LED_AMARELO, HIGH);
                    digitalWrite(LED_VERDE, LOW);
                    digitalWrite(LED_AZUL, LOW);
                    digitalWrite(LED_VERMELHO, LOW);
                }
                else {
                    // 281 a 330cm
                    if (distanciaApurada > 281 && distanciaApurada <= 330) {
                        digitalWrite(LED_BRANCO, HIGH);
                        digitalWrite(LED_AMARELO, LOW);
                        digitalWrite(LED_VERDE, LOW);
                        digitalWrite(LED_AZUL, LOW);
                        digitalWrite(LED_VERMELHO, LOW);
                    }
                    else {
                        // > 330cm
                        digitalWrite(LED_BRANCO, LOW);
                        digitalWrite(LED_AMARELO, LOW);
                        digitalWrite(LED_VERDE, LOW);
                        digitalWrite(LED_AZUL, LOW);
                        digitalWrite(LED_VERMELHO, LOW);
                    }
                }
            }
        }
    }
    delay(10); // Delay a little bit to improve simulation performance
}

long readUltrasonicDistance(int triggerPin, int echoPin)
{
    pinMode(triggerPin, OUTPUT); // Clear the trigger
    digitalWrite(triggerPin, LOW);
    delayMicroseconds(2);
    // Sets the trigger pin to HIGH state for 10 microseconds
    digitalWrite(triggerPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(triggerPin, LOW);
    pinMode(echoPin, INPUT);
    // Reads the echo pin, and returns the sound wave travel time in microseconds
    return pulseIn(echoPin, HIGH);
}