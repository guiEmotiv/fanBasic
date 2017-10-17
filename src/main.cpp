#include <Arduino.h>

int pinesPWM[6] = {11, 10, 9, 6, 5, 3};
float mapValues;
int pinAnalog = 0;
int baudrate = 9600;

void setup() {
    // put your setup code here, to run once:
    Serial.begin(baudrate);
    Serial.println("Inicializando...");
}

void loop() {
    // put your main code here, to run repeatedly:
    float potValues = analogRead(pinAnalog);
    /* analog value of 10 bits (0 to 1023) */
    /* digital value of 8 bits (0 to 255) */
    mapValues = map(potValues, 0, 1023, 0, 255);
    for (int i = 0; i < sizeof(pinesPWM); i++) {
      /* code */
      analogWrite(pinesPWM[i], mapValues);
      Serial.println("pines de senal PWM: ");
      Serial.print(pinesPWM[i]);
      Serial.println("valor rango 0 - 255 (0V - 5V): ");
      Serial.print(mapValues);
    }
}
