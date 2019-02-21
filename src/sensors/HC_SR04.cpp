#include "HC_SR04.h"

HC_SR04::HC_SR04(uint8_t trigPin, uint8_t echoPin)
    : trigPin(trigPin), echoPin(echoPin)
{
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
}

unsigned long HC_SR04::getSingleDistance()
{
    // Clear trigger signal
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);

    // Set Trigger pin HIGH for 10 usec
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    // Read Echo pin HIGH duration in usec, convert to cm
    // The speed of sound is 340 m/s = 0.034 cm/us
    // The ping travels out and back, need to divide by 2.
    // pulseIn() returns the length of the pulse in microseconds (in unsigned long).
    //   or 0 if timeout. Default timeout is 1 second.
    unsigned long distance = pulseIn(echoPin, HIGH) * 0.017;
   
    // debugging
    //   Serial.print("----- ");
    //   Serial.print(distance);
    //   Serial.println("cm....");
    return distance;
}

unsigned long HC_SR04::getAverageDistance()
{
    // Get the average of 3 readings
    unsigned long distances[3];
    for (int i = 0; i < 3; ++i) {
        distances[i] = getSingleDistance();
    }

    return (distances[0] + distances[1] + distances[2]) / 3;
}

// [TODO] Get the median reading instead of average, to avoid 0.
unsigned long HC_SR04::getTrimmedDistance()
{
    unsigned long distances[5];
    for (int i = 0; i < 5; ++i) {
        distances[i] = getSingleDistance();
    }

    unsigned long max = distances[0];
    unsigned long min = distances[0];

    for (int i = 1; i < 5; ++i) {
        if (distances[i] > max) max = distances[i];
        if (distances[i] < min) min = distances[i];
    }

    return (distances[0] + distances[1] + distances[2] + distances[3] + distances[4] - max - min) / 3;
}