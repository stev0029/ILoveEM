#ifndef PLAYER_H
#define PLAYER_H

#include <cstdint>
#include "Sequence.h"

#define MAX_SEQUENCE 5

class Player
{
public:
    static void add(Sequence *sequence);
    static void update();

private:
    static Sequence *sequences[];
    static uint8_t length;
};

#endif