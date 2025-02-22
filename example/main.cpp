#include <Arduino.h>
#include <FindMyDevice.h>

const char* EID = "YOUR_EID_HERE";

FindMyDevice findMyDevice;

void setup() {
    findMyDevice.setEID(EID);
    findMyDevice.start();
}

void loop() {
}