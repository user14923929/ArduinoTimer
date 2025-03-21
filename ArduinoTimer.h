class ArduinoTimer {
    public:
        void setTimeout(unsigned long interval);
        void start();
        void stop();
        void reset();
        bool tick();
    private:
        unsigned long _interval;
        unsigned long _startTime;
        bool _running;
}