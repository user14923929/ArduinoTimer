// CPP file for the ArduinoTimer class

#include "ArduinoTimer.h"
#include <Arduino.h>

ArduinoTimer::setTimeout(unsigned long interval) {
    _interval = interval;
    _running = false;
}

void ArduinoTimer::start() {
    _startTime = millis();
    _running = true;
}

void ArduinoTimer::stop() {
    _running = false;
}

bool ArduinoTimer::tick() {
    if (_running && millis() % _interval == 0) {
        _running = false;
        _startTime = millis();
        return true;
    }
    return false;
}