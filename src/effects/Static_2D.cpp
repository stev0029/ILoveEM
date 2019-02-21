#include "Static_2D.h"

Static2D::Static2D(Segment2D &segment, uint16_t duration, uint32_t color) :
    Effect2D(segment, duration), color(color) {}

uint32_t Static2D::genPixelColor(uint8_t row, uint8_t col, uint16_t time)
{
    return color;
}