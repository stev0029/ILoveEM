#include "Test_Strip.h"
#include "Test_Segment.h"
#include "effects/Blinking_2D.h"
#include "effects/Static_2D.h"
#include "Player.h"

#include <iostream>

TestStrip strip1(16);
TestSegment segment1(strip1, 4, 4);

Sequence & sequence1 =
    Player::newSequence()
    .first(new Blinking2D(segment1, 10, 0x000001, 2))
    .next(new Static2D(segment1, 5, 0x00007))
    .loopToFirst();

void setup()
{
    sequence1.play();
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