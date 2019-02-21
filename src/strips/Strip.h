#ifndef STRIP_H
#define STRIP_H

#include <cstdint>

/**
 * Interface for basic led strips
 */
class Strip
{
public:
    // Function to set all leds to off
    virtual void begin() = 0;

    // Function to send data stored to actually change the led colors
    virtual void show() = 0;

    // Setter and getter for individual led on strip
    virtual uint32_t getPixelColor(uint16_t n) const = 0;
    virtual void setPixelColor(uint16_t n, uint32_t color) = 0;
};

#endif