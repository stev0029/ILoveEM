#include "Test_Strip.h"
#include "Test_Segment.h"
#include "effects/Blinking_2D.h"
#include "effects/Static_2D.h"
#include "Sequence.h"
#include "Player.h"

#include <iostream>

TestStrip strip1(16);
TestSegment segment1(strip1, 4, 4);
Sequence seq;

void setup()
{
    strip1.begin();    
    seq.first(new Blinking2D(segment1, 0x1, 1, 10)).next(new Static2D(segment1, 5, 7)).loopToFirst();

    Player::add(&seq);

    seq.play();
}

void loop()
{
    Player::update();
    strip1.show();
}

int main()
{
    setup();
    while (1)
    {
        loop();
        std::cin.get();
    }
}