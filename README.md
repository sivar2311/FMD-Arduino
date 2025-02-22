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
#include <FMD.h>

const char* eid = "YOUR_EID_STRING_HERE";

FMD fmd;

void setup() {
    NimBLEDevice::init("");
    fmd.setEID(eid);
    fmd.start();
}

void loop() {
}
```

### Dependencies
This library depends on [h2zero/NimBLE-Arduino](https://github.com/h2zero/NimBLE-Arduino) which will be installed automatically to your PlatformIO project.


[Discord](https://discord.gg/CC8mE7pxHk)
