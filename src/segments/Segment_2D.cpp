#include "Segment_2D.h"

Segment2D::Segment2D(uint8_t height, uint8_t width) :
    height(height), width(width) {}

uint8_t Segment2D::getHeight() const
{
    return height;
}

uint8_t Segment2D::getWidth() const
{
    return width;
}
