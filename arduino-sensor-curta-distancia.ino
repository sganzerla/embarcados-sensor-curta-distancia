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
  
  pinMode(0, OUTPUT);
  Serial.begin(9600);
 
}

void loop()
{
  tone(0, 523, 1000); // play tone 60 (C5 = 523 Hz)
  distanciaApurada = (0.01723 * readUltrasonicDistance(SENSOR_TRIGGER, SENSOR_ECHO));
  Serial.println(distanciaApurada);
  // todo implementar para as distâncias escala de cores acesas.
  if (distanciaApurada < 70) {
    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
  } else {
    if (distanciaApurada < 150) {
      digitalWrite(10, LOW);
      digitalWrite(9, HIGH);
      digitalWrite(8, LOW);
    } else {
      digitalWrite(10, LOW);
      digitalWrite(9, LOW);
      digitalWrite(8, HIGH);
    }
  }
  delay(10); // Delay a little bit to improve simulation performance
}

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
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