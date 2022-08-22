#include <Arduino.h>
#line 1 "c:\\Users\\carlo\\Projects\\Arduino\\Blink\\sketch.ino"
#line 1 "c:\\Users\\carlo\\Projects\\Arduino\\Blink\\sketch.ino"
#line 1 "c:\\Users\\carlo\\Projects\\Arduino\\Blink\\sketch.ino"
void setup();
#line 6 "c:\\Users\\carlo\\Projects\\Arduino\\Blink\\sketch.ino"
void loop();
#line 1 "c:\\Users\\carlo\\Projects\\Arduino\\Blink\\sketch.ino"
void setup()
{
    pinMode(6, OUTPUT);
}

void loop()
{
    digitalWrite(6, HIGH);
    delay(1000);
    digitalWrite(6, LOW);
    delay(1000);
}

