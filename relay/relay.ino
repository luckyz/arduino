#include "Relay.h"

Relay light(7, true); // constructor receives (pin, isNormallyOpen) true = Normally Open, false = Normally Closed

void setup() {
	light.begin(); // inicializes the pin
}

void loop() {
	light.turnOn();  //turns relay on
	bool isLightOn = light.getState(); //returns a bool, true = on, false = off
}
