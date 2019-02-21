#include "Sequence.h"

Sequence & Sequence::first(Effect *effect)
{
    firstPtr = effect;
    currentPtr = effect;
    length = 1;
    return *this;
}

Sequence & Sequence::next(Effect *effect)
{
    // Change next reference of last effect
    getLastPtr()->next = effect;
    length++;
    return *this;
}

void Sequence::loopTo(Effect *effect)
{
    getLastPtr()->next = effect;
}

void Sequence::loopToFirst()
{
    getLastPtr()->next = firstPtr;
}

void Sequence::update()
{
    if (currentPtr == nullptr)
    {
        is_finish = true;
        is_stop = true;
        return;
    }
    else
    {
        currentPtr->update();
    }

    if (currentPtr->is_finish())
    {
        // Auto reset Effect after finish
        currentPtr->reset();

        // Move currentPtr to the next Effect
        currentPtr = currentPtr->next;
    }
}

void Sequence::play()
{
    is_stop = false;
}

void Sequence::stop()
{
    is_stop = true;
}

void Sequence::skip()
{
    currentPtr->reset();
    currentPtr = currentPtr->next;
}

void Sequence::reset()
{
    currentPtr = firstPtr;
    is_finish = false;
    for (uint8_t i = 0; i < length; i++)
    {
        getPtr(i)->reset();
    }
}

Effect * Sequence::getPtr(uint8_t index)
{
    Effect * ptr = firstPtr;
    for (uint8_t i = 0; i < index; i++)
        ptr = firstPtr->next;
    
    return ptr;
}

Effect * Sequence::getLastPtr()
{
    return getPtr(length - 1);
}