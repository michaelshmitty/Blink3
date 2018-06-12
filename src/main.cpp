#include <Arduino.h>
#include "DHT.h"

DHT dht;

void setup() {
    // initialize LED digital pin as an output.
    pinMode(LED_BUILTIN, OUTPUT);
    dht.setup(1);
}

void loop() {
    // turn the LED on (HIGH is the voltage level)
    digitalWrite(LED_BUILTIN, HIGH);

    // wait for a second
    delay(1000);

    // turn the LED off by making the voltage LOW
    digitalWrite(LED_BUILTIN, LOW);

   // wait for a second
    delay(1000);
}
