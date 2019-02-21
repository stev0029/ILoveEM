#include "Player.h"

uint8_t Player::length = 0;
Sequence *Player::sequences[] = {nullptr};

void Player::add(Sequence *sequence)
{
    sequences[length] = sequence;
    length++;
}

void Player::update()
{
    for (int i = 0; i < length; i++)
    {
        Sequence *sequence = sequences[i];
        
        if (!sequence->is_stop && !sequence->is_finish)
            sequence->update();
    }
}