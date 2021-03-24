int switchState = 0;

void setup() {
	// Set LED pins to OUTPUT
	pinMode(3, OUTPUT);
	pinMode(4, OUTPUT);
	pinMode(5, OUTPUT);

	// Set button pin to INPUT
	pinMode(2, INPUT);
}

void loop() {
	// Sets digitalRead to the state of the button.
	switchState = digitalRead(2);

	if (switchState == LOW)
	{
		// The button is not pressed
		digitalWrite(3, HIGH);	// Turn on green led
		digitalWrite(4, LOW);	// Turn off red led 1
		digitalWrite(5, LOW);	// Tun off red led 2
	}
	else
	{
		// The button is pressed
		digitalWrite(3, LOW);	// Turn off green led
		digitalWrite(4, HIGH);	// Turn on red led 1
		digitalWrite(5, HIGH);	// Turn on red led 2

		delay(250);				// Wail for 0.25 secconds
		// Toggle the leds
		digitalWrite(4, LOW);	// Turn off red led 1
		digitalWrite(5, HIGH);	// Turn on red led 2
		delay(250);
	}

}

