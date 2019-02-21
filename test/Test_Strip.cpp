#include <iostream>
#include "Test_Strip.h"

TestStrip::TestStrip(uint16_t length) : length(length)
{
    pixels = new uint32_t[length];
}

void TestStrip::begin()
{
    for (uint16_t i = 0; i < length; i++)
    {
        pixels[i] = 0;
    }
}

void TestStrip::show()
{
    for (uint16_t i = 0; i < length; i++)
    {
        std::cout << pixels[i] << " ";
    }
    std::cout << "\n";
}

uint32_t TestStrip::getPixelColor(uint16_t n) const
{
    return pixels[n];
}

void TestStrip::setPixelColor(uint16_t n, uint32_t color)
{
    pixels[n] = color;
}