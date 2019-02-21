#ifndef LED_2D_SEGMENT_H
#define LED_2D_SEGMENT_H

#include <cstdint>

class Segment2D
{
public:
    uint8_t getHeight() const;
    uint8_t getWidth() const;

    virtual void setPixelColor(uint8_t row, uint8_t col, uint32_t color) = 0;
    virtual uint32_t getPixelColor(uint8_t row, uint8_t col) const = 0;

protected:
    Segment2D(uint8_t height, uint8_t width);
    uint8_t height, width;
};

#endif
