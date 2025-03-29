/*
 * ArduinoTimer.h - Library for creating timers in Arduino
 * Copyright (c) 2025 IlliaCoder
 * Commits:
    * 1st, 21.03.2025.
    * 2nd version, 21.03.2025.
    * 3rd version, 26.03.2025.
*/

class ArduinoTimer {
    public:
        ArduinoTimer(unsigned long interval);
        void start();
        void stop();
        bool tick();
    private:
        unsigned long _interval;
        unsigned long _startTime;
        bool _running;
}