#include "FindMyDevice.h"

#include <NimBLEDevice.h>

static void hex_string_to_packet(const char* hex, FMDNPacket& packet) {
    for (size_t i = 0; i < 20; i++) sscanf(hex + 2 * i, "%2hhx", &packet.eid[i]);
}

void FindMyDevice::setEID(const char* eid) {
    hex_string_to_packet(eid, packet);
}

void FindMyDevice::setEID(const String& eid) {
    setEID(eid.c_str());
}

void FindMyDevice::setBatteryLevel(uint8_t level) {
    flags = flags | ((level & 0x03) << 5);
    setFlags();
}

void FindMyDevice::setUnwantedTrackingMode(uint8_t mode) {
    flags = flags | ((mode & 1) << 7);
    setFlags();
}

void FindMyDevice::start() const {
    NimBLEDevice::stopAdvertising();

    NimBLEAdvertising*      pAdv = NimBLEDevice::getAdvertising();
    NimBLEAdvertisementData advData;

    advData.addData((uint8_t*)&packet, sizeof(packet));

    pAdv->setAdvertisementData(advData);
    pAdv->start();
}

void FindMyDevice::stop() const {
    NimBLEDevice::stopAdvertising();
}

void FindMyDevice::setFlags() {
    // here some calculation must be performed to hash the flags
    // packet.hashFlags = flags;
}
