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