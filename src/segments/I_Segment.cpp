#include "I_Segment.h"

ISegment::ISegment(Strip &strip) : Single2D(strip, 30, 16) {}

uint16_t ISegment::mapper(uint8_t row, uint8_t col) const
{
    if (row < 5)
        return (row + 1) * 16 - col - 1;
    else if (row < 25 && 6 <= col && col < 10)
        return 80 + (row - 4) * 16 - col - 7;
    else if (row < 30)
        return 160 + (row - 24) * 16 - col - 1;
    else
        return INVALID_MAP;
}