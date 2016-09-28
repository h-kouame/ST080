/*
 * UIUdate.h
 *
 *  Created on: Sep 27, 2016
 *      Author: Tinotenda Chemvura
 */

#ifndef UIUDATE_H_
#define UIUDATE_H_

#include "Utils080.h"

void vUITask(void * pvparameters);

/**
 * Task to update the LEDs depending on the current mode and status of the system
 */
void vUITask(void * pvparameters){
	// TODO

	while (true){
		while(MODE==COMPOSER)
		{
			// go throught channel rack and set LED status based on channel rack pins
			// NB Have to manually check each pin on the channel rack and update the corresponding GPIO pin
			// TODO if statements for each pin in the rack
		}
		while(MODE==FREESTYLE)
		{
			// TODO light up the corresponding LEDs for the freestyle pad depending on the status of the flags
			// * use a global array of flags (four flags) which will be set by the IRQ and reset inside this function
			// * LEDs must flash for a short period (200ms)
			// * Can use a timer to count up to 200ms. NB TODO must carefully work out algorithm

		}
		while(MODE==PLAYBACK)
		{

		}
		// TODO task delay
		vTaskDelay(5);
	}
}
#endif /* UIUDATE_H_ */
