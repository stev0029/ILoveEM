#ifndef TEST_2D_SEGMENT_H
#define TEST_2D_SEGMENT_H

#include "Test_Strip.h"

class Test2DSegment
{
public:
    Test2DSegment(TestStrip & strip);

    uint8_t getHeight() const;
    uint8_t getWidth() const;

    void setPixelColor(uint8_t row, uint8_t col, uint32_t color);
    uint32_t getPixelColor(uint8_t row, uint8_t col) const;

protected:
    TestStrip & strip;
    uint8_t height, width;

    virtual uint16_t mapper(uint8_t row, uint8_t col) const;
};

#endif
