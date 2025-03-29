#include <ArduinoTimer.h>

// Pin where the LED is connected
const int ledPin = 13;

// Create a timer with a 1-second interval (1000 milliseconds)
ArduinoTimer blinkTimer(1000);

void setup() {
    // Initialize the LED pin as an output
    pinMode(ledPin, OUTPUT);

    // Start the timer
    blinkTimer.start();
}

void loop() {
    // Check if the timer has ticked
    if (blinkTimer.tick()) {
        // Toggle the LED state
        digitalWrite(ledPin, !digitalRead(ledPin));
    }
}