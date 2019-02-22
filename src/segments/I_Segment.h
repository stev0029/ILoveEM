#ifndef I_SEGMENT_H
#define I_SEGMENT_H

#include "segments/Single_2D.h"

class ISegment : public Single2D
{
public:
    ISegment(Strip &strip);

private:
    uint16_t mapper(uint8_t row, uint8_t col) const;
};

#endif