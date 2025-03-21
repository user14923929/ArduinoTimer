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

void ArduinoTimer::reset() {
    _startTime = millis();
}

bool ArduinoTimer::tick() {
    if (_running && millis() - _startTime >= _interval) {
        _running = false;
        return true;
    }
    return false;
}