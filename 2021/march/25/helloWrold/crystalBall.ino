#include <LiquidCrystal.h>								// Include the LiquidCrystal library
LiquidCrystal LCD(12,11,5,4,3,2);						// Initilize the LCD object

void setup() 
{
	LCD.begin(16, 2);
	LCD.clear();
}

void loop() 
{
	LCD.print("Hello, World!");
	LCD.setCursor(0,1);
	LCD.print("My name is:");
	delay(250);									//Wait for 0.25 seconds

	LCD.clear();
	LCD.setCursor(0,0);
	LCD.print("Hello, World");
	LCD.setCursor(0,1);
	LCD.print("Wyatt Jackson");
}
