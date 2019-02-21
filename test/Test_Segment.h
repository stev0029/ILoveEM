#ifndef TEST_SEGMENT_H
#define TEST_SEGMENT_H

#include <cstdint>
#include "segments/Single_2D.h"
#include "strips/Strip.h"

class TestSegment : public Single2D
{
public:
    TestSegment(Strip &strip, uint8_t height, uint8_t width);

private:
    uint16_t mapper(uint8_t row, uint8_t col) const;
};

#endif