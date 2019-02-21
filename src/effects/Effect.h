#ifndef EFFECT_H
#define EFFECT_H

#include <cstdint>

class Effect
{
public:
    Effect *next = nullptr;

    virtual void update();
    bool is_finish();
    void setTime(uint16_t time);
    void reset();

protected:
    Effect(uint16_t duration);


    uint16_t duration;
    uint16_t time = 0;
};

#endif