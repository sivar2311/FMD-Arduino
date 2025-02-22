#include <Arduino.h>
#include <NimBLEDevice.h>
#include <FMD.h>

const char* eid = "YOUR_EID_STRING_HERE";

FMD fmd;

void setup() {
    Serial.begin(115200);
    NimBLEDevice::init("");
    fmd.setEID(eid);
    fmd.start();
}

void loop() {
}