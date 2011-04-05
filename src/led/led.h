/*****************************************************************************
* Odense University College of Enginerring
* Embedded C Programming (ECP)
*
* MODULENAME.: led.h
*
* PROJECT....: ECP
*
* DESCRIPTION:
*
* Change Log:
******************************************************************************
* Date    Id    Change
* YYMMDD
* --------------------
* 050128  NS    Module created.
*
*****************************************************************************/

#ifndef _LED_H
  #define _LED_H

/***************************** Include files *******************************/
#include "../inc/emp_type.h"
/*****************************    Defines    *******************************/

/*****************************   Constants   *******************************/

/*****************************   Functions   *******************************/

void led_all_toggle();
/*****************************************************************************
*   Function : Toggles all the LEDs.
*****************************************************************************/

void led_green_toggle();
/*****************************************************************************
*   Function : Toggles the green LED.
*****************************************************************************/

void led_red_toggle();
/*****************************************************************************
*   Function : Toggles the red LED.
*****************************************************************************/

void led_status_toggle();
/*****************************************************************************
*   Function : Toggles the status LED.
*****************************************************************************/

void led_yellow_toggle();
/*****************************************************************************
*   Function : Toggles the yellow LED.
*****************************************************************************/

void led_status_on();
/*****************************************************************************
*   Function : Turn the status LED on.
*****************************************************************************/

void led_status_off();
/*****************************************************************************
*   Function : Turn the status LED off.
*****************************************************************************/

void led_yellow_on();
/*****************************************************************************
*   Function : Turn the yellow LED on.
*****************************************************************************/

void led_yellow_off();
/*****************************************************************************
*   Function : Turn the yellow LED off.
*****************************************************************************/

void led_green_on();
/*****************************************************************************
*   Function : Turn the green LED on.
*****************************************************************************/

void led_green_off();
/*****************************************************************************
*   Function : Turn the green LED off.
*****************************************************************************/

void led_red_on();
/*****************************************************************************
*   Function : Turn the red LED on.
*****************************************************************************/

void led_red_off();
/*****************************************************************************
*   Function : Turn the red LED off.
*****************************************************************************/

void init_leds();
/*****************************************************************************
*   Function : Sets up the LEDs.
*****************************************************************************/

/****************************** End Of Module *******************************/
#endif
