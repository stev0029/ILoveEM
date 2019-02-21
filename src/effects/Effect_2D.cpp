#include "Effect_2D.h"

Effect2D::Effect2D(Segment2D &segment, uint16_t duration) :
    Effect(duration), segment(segment) {}

void Effect2D::update()
{
    uint8_t height = segment.getHeight();
    uint8_t width = segment.getWidth();

    for (uint8_t row = 0; row < height; row++)
        for (uint8_t col = 0; col < width; col++)
            segment.setPixelColor(row, col, genPixelColor(row, col, time));
    
    // Increment time for next iter, must be at the end
    Effect::update();
}
