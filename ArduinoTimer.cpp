// CPP file for the ArduinoTimer class

#include "ArduinoTimer.h"
#include <Arduino.h>

ArduinoTimer::ArduinoTimer(unsigned long interval) : _interval(interval), _running(false) {
    _startTime = 0;
}

void ArduinoTimer::start() {
    _startTime = millis();
    _running = true;
}

void ArduinoTimer::stop() {
    _running = false;
}

bool ArduinoTimer::tick() {
    if (_running && (millis() - _startTime >= _interval)) {
        _startTime = millis();
        return true;
    }
    return false; 
}