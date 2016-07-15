/*
 * Delay.h
 *
 *  Created on: 12 jul. 2016
 *      Author: manue
 */

#ifndef LIBRARIES_DELAY_DELAY_H_
#define LIBRARIES_DELAY_DELAY_H_
#include <Arduino.h>

class NonBlockDelay {
	unsigned long iTimeout;
public:
	void Delay(unsigned long);
	bool Timeout(void);
	unsigned long Time(void);
};

#endif /* LIBRARIES_DELAY_DELAY_H_ */
