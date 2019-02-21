#ifndef EFFECT_2D_H
#define EFFECT_2D_H

#include "Effect.h"
#include "segments/Segment_2D.h"

class Effect2D : public Effect
{
public:
    void update();

protected:
    Effect2D(Segment2D &segment, uint16_t duration);
    Segment2D & segment;
    
    virtual uint32_t genPixelColor(uint8_t row, uint8_t col, uint16_t time) = 0;
};

#endif