#include "Test_Segment.h"

TestSegment::TestSegment(Strip &strip, uint8_t height, uint8_t width) :
    Single2D(strip, height, width) {}

uint16_t TestSegment::mapper(uint8_t row, uint8_t col) const
{
    return col * width + row;
}