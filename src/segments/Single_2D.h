#ifndef SINGLE_2D_H
#define SINGLE_2D_H

#include "Segment_2D.h"
#include "strips/Strip.h"

#define INVALID_MAP 65535

/**
 * Used to implement 2D Segments that uses only a single Strip.
 * 
 * Implementation of `mapper` maps indexes of a 2D array representing
 * the Segment to the corresponding position on the Strip.
 */
class Single2D : public Segment2D
{
public:
    uint32_t getPixelColor(uint8_t row, uint8_t col) const;
    void setPixelColor(uint8_t row, uint8_t col, uint32_t color);

protected:
    Single2D(Strip &strip, uint8_t height, uint8_t width);

    Strip &strip;

    virtual uint16_t mapper(uint8_t row, uint8_t col) const = 0;
};

#endif