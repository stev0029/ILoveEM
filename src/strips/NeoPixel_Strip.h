#ifndef NEOPIXEL_STRIP_H
#define NEOPIXEL_STRIP_H

#include <Adafruit_NeoPixel.h>
#include "Strip.h"

/**
 * Implementation of Strip using Adafruit_NeoPixel library
 */
class NeoPixelStrip : public Strip
{
public:
    NeoPixelStrip(uint16_t length, uint8_t pin, neoPixelType type);

    void begin();
    void show();
    uint32_t getPixelColor(uint16_t n) const;
    void setPixelColor(uint16_t n, uint32_t color);

private:
    Adafruit_NeoPixel neoPixel;
};

#endif