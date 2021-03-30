#include "Arduino.h"
#include <LiquidCrystal.h>

#ifndef Morse_h
#define Morse_h

class LibLCD
{
    void printMessage(X const x, String line1, String line2)
    {
        LCD.clear();
        LCD.print(line1);
        LCD.setCursor(0,1);
        LCD.print(line2);
    }
}

#endif