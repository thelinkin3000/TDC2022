# 1 "c:\\Users\\carlo\\Projects\\Arduino\\Siren\\sketch.ino"
# 1 "c:\\Users\\carlo\\Projects\\Arduino\\Siren\\sketch.ino"
int val = 0;

void setup()
{
    pinMode(11, 0x1);
}
void loop()
{
    for (int i = 0; i < 100; i++)
    {
        if (i <= 50)
        {
            val = (i * 255 / 50);
        }
        else
        {
            val = 255 - ((100 - (i - 50)) * 255 / 100);
        }
        analogWrite(11, val);
        delay(10);
    }
}
