#include <Arduino.h>

int pinesPWM[6] = {11, 10, 9, 6, 5, 3};

void setup() {
    // put your setup code here, to run once:
    Serial.begin(9600);
    Serial.println("Inicializando...");
}

void loop() {
    // put your main code here, to run repeatedly:
    int potValues = analogRead(0);
    /* analog value of 10 bits (0 to 1023) */
    /* digital value of 8 bits (0 to 255) */
    mapValues = map(potValues, 0, 1023, 0, 255);
    for (int i = 0; i < length(pinesPWM); i++) {
      /* code */
      analogWrite(pin, mapValues);
    }


}
