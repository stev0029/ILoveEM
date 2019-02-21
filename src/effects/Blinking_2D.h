#ifndef BLINKING_2D_H
#define BLINKING_2D_H

#include "Effect_2D.h"

class Blinking2D : public Effect2D
{
public:
    Blinking2D(Segment2D &segment, uint16_t duration, uint32_t color, uint16_t period);

private:
    uint32_t color;
    uint8_t period;

    uint32_t genPixelColor(uint8_t row, uint8_t col, uint16_t time);
};

#endif