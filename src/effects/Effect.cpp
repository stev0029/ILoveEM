#include "Effect.h"

Effect::Effect(uint16_t duration) : duration(duration) {}

void Effect::update()
{
    time++;
}

void Effect::setTime(uint16_t time)
{
    this->time = time;
}

void Effect::reset()
{
    setTime(0);
}

bool Effect::is_finish()
{
    return time == duration;
}