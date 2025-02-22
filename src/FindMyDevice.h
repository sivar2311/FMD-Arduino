#pragma once

#include <WString.h>

struct __attribute__((packed)) FMDNPacket {
  uint8_t header[8]{0x02, 0x01, 0x06, 0x19, 0x16, 0xAA, 0xFE, 0x41};
  uint8_t eid[20]{0x00};
  uint8_t hashFlags{0x00};
};

class FindMyDevice {
  public:
    enum BATT_LEVEL {
        BATT_NA       = 0,
        BATT_NORMAL   = 1,
        BATT_LOW      = 2,
        BATT_CRITICAL = 3
    };

  public:
    void setEID(const char* eid);
    void setEID(const String& eid);

    void setBatteryLevel(uint8_t level);
    void setUnwantedTrackingMode(uint8_t mode);

    void start() const;
    void stop() const;

  protected:
    void setFlags();

  protected:
    FMDNPacket packet;
    uint8_t    flags;
};
