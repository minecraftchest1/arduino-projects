#include <LiquidCrystal.h>								// Include the LiquidCrystal library
LiquidCrystal LCD(12,11,5,4,3,2);						// Initilize the LCD object
#define HOMELN1 "Hello, World"
#define HOMELN2 ""
#define PG2LN1 "My name is:"
#define PG2LN2 "Wyatt Jackson"
#define PG3LN1 "Created by"
#define PG3LN2 "Wyatt Jackson"
#define WAIT 2500

void setup() 
{
	LCD.begin(16, 2);
	LCD.clear();
}

void loop() 
{
	//LCD.print("Hello, World!");
	//LCD.setCursor(0,1);
	//LCD.print("My name is:");
	//delay(250);									//Wait for 0.25 seconds

	//LCD.setCursor(0,1);
	//LCD.print("            ");
	//LCD.setCursor(0,1);
	//LCD.print("Wyatt Jackson   ");


	
	LCD.clear();
	LCD.print(HOMELN1);
	LCD.setCursor(0,1);
	LCD.print(HOMELN2);
	delay(WAIT);								//Wain 2.50 seconds
	LCD.clear();
	LCD.print(PG2LN1);
	LCD.setCursor(0,1);
	LCD.print(PG2LN2);
	delay(WAIT);								//Wait 2.50 seconds
	LCD.clear();
	LCD.print(PG3LN1);
	LCD.setCursor(0,1);
	LCD.print(PG3LN2);
	delay(WAIT);
	
}
