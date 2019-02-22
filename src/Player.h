#ifndef PLAYER_H
#define PLAYER_H

#include <cstdint>
#include "Sequence.h"

#define MAX_SEQUENCE 5

/**
 * Static class to handle Sequences.
 */
class Player
{
public:
    /**
     * Creates a new Sequence and adds Sequence to internal list.
     * Returns the created Sequence.
     */
    static Sequence & newSequence();

    /**
     * Adds Sequence to internal list.
     * All sequences in list will be updated when Player::update() is called.
     */
    static void add(Sequence *sequence);

    /** 
     * Updates all added sequences.
     * Put in loop().
     */
    static void update();

private:
    // Internal list
    static Sequence *sequences[];

    static uint8_t length;
};

#endif