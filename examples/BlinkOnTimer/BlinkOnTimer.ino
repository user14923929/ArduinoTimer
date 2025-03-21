#include <ArduinoTimer.h>
ArduinoTimer timer; // *Create an instance of the ArduinoTimer class

void setup() {
    timer.setTimeout(1000); // *Set the interval to 1000ms (1 second)
    timer.start(); // *Start the timer
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    if (timer.tick()) {
        digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
        timer.reset(); // *Reset the timer
    }
}