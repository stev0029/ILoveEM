#include "Blinking_2D.h"

Blinking2D::Blinking2D(Segment2D &segment, uint16_t duration, uint32_t color, uint16_t period) :
    Effect2D(segment, duration), color(color), period(period) {}

uint32_t Blinking2D::genPixelColor(uint8_t row, uint8_t col, uint16_t time)
{
    return ((time / period) % 2 == 0) ? 0x000000 : row * segment.getWidth() + col;
}