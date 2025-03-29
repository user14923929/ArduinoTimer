#include <ArduinoTimer.h>

// Create a timer with a 1000ms (1 second) interval
ArduinoTimer timer(1000);

void setup() {
    // Initialize Serial communication
    Serial.begin(9600);

    // Start the timer
    timer.start();
}

void loop() {
    // Check if the timer has ticked
    if (timer.tick()) {
        // Print a message to the Serial Monitor
        Serial.println("Timer ticked!");
    }
}