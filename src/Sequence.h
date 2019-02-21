#ifndef SEQUENCE_H
#define SEQUENCE_H

#include <cstdint>
#include "effects/Effect.h"

class Sequence
{
public:
    // For constructing the sequence
    Sequence & first(Effect *effect);
    Sequence & next(Effect *effect);
    Sequence & loopTo(Effect *effect);
    Sequence & loopToFirst();

    bool is_stop = true;
    bool is_finish = false;
    Effect *getPtr(uint8_t index);
    Effect *getLastPtr();

    // To be called by Player every loop
    void update();

    void play();
    void stop();
    void skip();
    void reset();

private:
    Effect *firstPtr;
    Effect *currentPtr;
    uint8_t length;
};

#endif