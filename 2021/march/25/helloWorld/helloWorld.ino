#include <LiquidCrystal.h>								// Include the LiquidCrystal library
LiquidCrystal LCD(12,11,5,4,3,2);						// Initilize the LCD object
#define HOMELN1 "Hello, World"
#define HOMELN2 ""

#define PG2LN1 "My name is:"
#define PG2LN2 "Wyatt Jackson"

#define PG3LN1 "Created by"
#define PG3LN2 "Wyatt Jackson"

#define PG4LN1 "Minecraftchest1"
#define PG4LN2 "@outlook.com"

#define PG5LN1 "Minecraftchest1"
#define PG5LN2 ".wordpress.com

#define WAIT 2500

void setup() 
{
	LCD.begin(16, 2);
	LCD.clear();
}

void loop() 
{
	printMessage(HOMELN1, HOMELN2);	
	delay(WAIT);
	printMessage(PG2LN1, PG2LN2);
	delay(WAIT);
	printMessage(PG3LN1, PG3LN2);
	delay(WAIT);
	printMessage(PG4LN1, PG4LN2);
	delay(WAIT);
	printMessage(PG5LN1, PG5LN2);
	delay(WAIT);
}

void printMessage(String line1, String line2)
{
	LCD.clear();
	LCD.print(line1);
	LCD.setCursor(0,1);
	LCD.print(line2);
}
