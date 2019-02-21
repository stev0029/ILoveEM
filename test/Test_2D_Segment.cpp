#include "Test_2D_Segment.h"

Test2DSegment::Test2DSegment(TestStrip & strip) :
    strip(strip) {}

uint8_t Test2DSegment::getHeight() const
{
    return height;
}

uint8_t Test2DSegment::getWidth() const
{
    return width;
}

uint32_t Test2DSegment::getPixelColor(uint8_t row, uint8_t col) const
{
    uint16_t n = mapper(row, col);
    return (n == -1) ? 0 : strip.getPixelColor(n);
}

void Test2DSegment::setPixelColor(uint8_t row, uint8_t col, uint32_t color)
{
    uint16_t n = mapper(row, col);
    if (n != -1)
        strip.setPixelColor(n, color);
}
