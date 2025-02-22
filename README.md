This is an Arduino library to create an ESP32 firmware for https://github.com/leonboe1/GoogleFindMyTools

## Usage

platformio.ini

```ini
lib_deps = 
  https://github.com/sivar2311/FMD-Arduino
```


Example

```C++
#include <Arduino.h>
#include <NimBLEDevice.h>
#include <FindMyDevice.h>

const char* EID = "YOUR_EID_HERE";

FindMyDevice findMyDevice;

void setup() {
    NimBLEDevice::init("");
    findMyDevice.setEID(EID);
    findMyDevice.start();
}

void loop() {
}
```

### Dependencies
This library depends on [h2zero/NimBLE-Arduino](https://github.com/h2zero/NimBLE-Arduino) which will be installed automatically to your PlatformIO project.

### Discord
[FMD-Arduino](https://discord.gg/CC8mE7pxHk)