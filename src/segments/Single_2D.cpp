#include "Single_2D.h"

Single2D::Single2D(Strip &strip, uint8_t height, uint8_t width) :
    Segment2D(height, width), strip(strip) {}

uint32_t Single2D::getPixelColor(uint8_t row, uint8_t col) const
{
    uint16_t n = mapper(row, col);
    return (n == INVALID_MAP) ? 0 : strip.getPixelColor(n);
}

void Single2D::setPixelColor(uint8_t row, uint8_t col, uint32_t color)
{
    uint16_t n = mapper(row, col);
    if (n != INVALID_MAP)
        strip.setPixelColor(n, color);
}