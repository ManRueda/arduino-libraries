/*
 * Delay.cpp
 *
 *  Created on: 12 jul. 2016
 *      Author: manue
 */

#include <Delay.h>

void NonBlockDelay::Delay(unsigned long t) {
	iTimeout = millis() + t;
	return;
}
;
bool NonBlockDelay::Timeout(void) {
	return (iTimeout < millis());
}
unsigned long NonBlockDelay::Time(void) {
	return iTimeout;
}
