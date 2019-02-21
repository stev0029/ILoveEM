#ifndef STATIC_2D_H
#define STATIC_2D_H

#include "Effect_2D.h"

class Static2D : public Effect2D
{
public:
    Static2D(Segment2D &segment, uint16_t duration, uint32_t color);

private:
    uint32_t color;

    uint32_t genPixelColor(uint8_t row, uint8_t col, uint16_t time);
};

#endif