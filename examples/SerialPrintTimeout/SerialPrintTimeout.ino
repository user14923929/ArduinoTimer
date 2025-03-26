#include <ArduinoTimer.h>
ArduinoTimer timer; // *Create an instance of the ArduinoTimer class

void setup() {
    Serial.begin(9600);
    timer.setTimeout(1000); // *Set timeout to 1000ms (1 second)
    timer.start();          // *Start the timer
}

void loop() {
    if (timer.tick()) {
        Serial.println("Timeout reached!");
    }
}