// La función setup corre una vez, al prenderse el Arduino
// o bien al reiniciar mediante el botón reset
void setup()
{
    // Inicializa el pin digital 6 como pin de salida
    pinMode(6, OUTPUT);
}

// La función loop corre una y otra vez sin parar
void loop()
{
    digitalWrite(6, HIGH);
    delay(1000);
    digitalWrite(6, LOW);
    delay(1000);
}
