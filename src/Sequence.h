#ifndef SEQUENCE_H
#define SEQUENCE_H

#include <cstdint>
#include "effects/Effect.h"

/**
 * Stores sequences of Effect as a linked list.
 */
class Sequence
{
public:
    // For constructing the sequence

    /**
     * Initialize Sequence, must be called first
     * then call other constructor functions.
     */
    Sequence & first(Effect *effect);

    /**
     * Appends Effect to the linked list.
     * Increments length of linked list.
     */
    Sequence & next(Effect *effect);

    /**
     * Sets the next reference of the last element to
     * an existing element in list.
     */
    Sequence & loopTo(uint8_t index);

    /**
     * Sets the next reference of the last element
     * back to the first element.
     */
    Sequence & loopToFirst();

    // To be called by Player every loop
    void update();

    // Playback functions
    void play();
    void stop();
    void skip();
    void reset();

private:
    bool is_stop = true;
    bool is_finish = false;

    Effect *firstPtr;
    Effect *currentPtr;
    uint8_t length;

    Effect *getPtr(uint8_t index);
    Effect *getLastPtr();
};

#endif