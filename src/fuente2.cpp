#include <Arduino.h>

void setup()
{
    Initialize LED pin as an output.
    pinMode(LED_BUILTIN, OUTPUT);
}
	  
void loop()
{
    delay(1000);
    // Set the LED LOW
    digitalWrite(LED_BUILTIN, LOW);
    // Wait for a second
    delay(1000);
}
