#include "NeoPixel_Strip.h"

NeoPixelStrip::NeoPixelStrip(uint16_t length, uint8_t pin, neoPixelType type) :
    neoPixel(length, pin, type) {}

void NeoPixelStrip::begin()
{
    neoPixel.begin();
}

void NeoPixelStrip::show()
{
    neoPixel.show();
}

uint32_t NeoPixelStrip::getPixelColor(uint16_t n) const
{
    return neoPixel.getPixelColor(n);
}

void NeoPixelStrip::setPixelColor(uint16_t n, uint32_t color)
{
    neoPixel.setPixelColor(n, color);
}