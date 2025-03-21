# ArduinoTimer Library

The `ArduinoTimer` library provides a simple way to manage timers in your Arduino projects. It allows you to set time intervals, start, stop, reset, and check if the timer has elapsed.

## Features

- Set a timeout interval.
- Start and stop the timer.
- Reset the timer to restart the countdown.
- Check if the timer has elapsed using the `tick()` method.

## Installation

1. Download or clone the library into your Arduino `libraries` folder:
    ```
    .../libraries/ArduinoTimer/
    ```
2. Restart the Arduino IDE to recognize the library.

## Usage

Include the library in your sketch:

```cpp
#include <ArduinoTimer.h>
```

### Example

```cpp
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
        timer.start();      // *Restart the timer
    }
}
```

## API Reference

### `void setTimeout(unsigned long interval)`
Sets the timeout interval in milliseconds.

### `void start()`
Starts the timer.

### `void stop()`
Stops the timer.

### `void reset()`
Resets the timer to the current time.

### `bool tick()`
Checks if the timer has elapsed. Returns `true` if the interval has passed since the timer started, otherwise `false`.

## License

This library is open-source and available under the MIT License.  
