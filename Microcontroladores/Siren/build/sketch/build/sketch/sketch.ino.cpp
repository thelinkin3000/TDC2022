#include <Arduino.h>
#line 1 "c:\\Users\\carlo\\Projects\\Arduino\\Siren\\sketch.ino"
#line 1 "c:\\Users\\carlo\\Projects\\Arduino\\Siren\\sketch.ino"
int val = 0;

void setup()
{
    pinMode(11, OUTPUT);
}

void loop()
{
    for (int i = 0; i < 50; i++)
    {
        val = (i * 255 / 50);
        analogWrite(11, val);
        delay(10);
    }
    for (int i = 0; i < 50; i++)
    {
        val = 255 - (i * 255 / 50);
        analogWrite(11, val);
        delay(10);
    }
}
