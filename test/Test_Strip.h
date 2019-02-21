#ifndef TEST_STRIP_H
#define TEST_STRIP_H

#include <cstdint>
#include "strips/Strip.h"

class TestStrip : public Strip
{
public:
    TestStrip(uint16_t length);
    void begin();
    void show();
    uint32_t getPixelColor(uint16_t n) const;
    void setPixelColor(uint16_t n, uint32_t color);

private:
    uint16_t length;
    uint32_t *pixels;
};

#endif