// CPP file for the ArduinoTimer class

#include "ArduinoTimer.h"
#include <Arduino.h>

ArduinoTimer::ArduinoTimer(unsigned long interval) {
    _interval = interval
    _running = false
}

void ArduinoTimer::start() {
    if (!_running) _running = true;
}

void ArduinoTimer::stop() {
    if (_running) _running = false;
}

bool ArduinoTimer::tick() {
    if ((_running) && (millis() - tmr >= _interval)) {
        return true
    } else {
        return false
    }
}