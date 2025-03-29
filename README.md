# ArduinoTimer Library

The **ArduinoTimer** library provides a simple way to create and manage timers in Arduino projects. It allows you to execute code at regular intervals without blocking the main loop.

## Features
- Easy-to-use timer interface.
- Non-blocking implementation.
- Start, stop, and tick functionality.

## Installation
1. Download or clone the repository.
2. Place the `ArduinoTimer` folder in your Arduino `libraries` directory.
3. Restart the Arduino IDE to recognize the library.

## Usage
### Include the Library
```cpp
#include <ArduinoTimer.h>
```

### Create a Timer
```cpp
ArduinoTimer myTimer(1000); // Timer with a 1-second interval
```

### Start the Timer
```cpp
myTimer.start();
```

### Check for Timer Ticks
```cpp
if (myTimer.tick()) {
    // Code to execute every interval
}
```

### Stop the Timer
```cpp
myTimer.stop();
```

## Example
```cpp
#include <ArduinoTimer.h>

ArduinoTimer myTimer(1000); // 1-second timer

void setup() {
    Serial.begin(9600);
    myTimer.start();
}

void loop() {
    if (myTimer.tick()) {
        Serial.println("Timer ticked!");
    }
}
```

## License
This library is provided under the MIT License. See the `LICENSE` file for details.

## Author
Created by IlliaCoder, 2025.  