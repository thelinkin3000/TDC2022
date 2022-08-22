# 1 "c:\\Users\\carlo\\Projects\\Arduino\\Blink\\sketch.ino"
# 1 "c:\\Users\\carlo\\Projects\\Arduino\\Blink\\sketch.ino"
void setup()
{
    pinMode(6, 0x1);
}

void loop()
{
    digitalWrite(6, 0x1);
    delay(1000);
    digitalWrite(6, 0x0);
    delay(1000);
}
