/*
 * defines.h
 *
 *  Created on: 1 de dez. de 2024
 *      Author: ueslei
 */

#ifndef MAIN_DEFINES_H_
#define MAIN_DEFINES_H_

#define DEBUG 1

#include <stdio.h>

#ifdef DEBUG
#define DEBUG_PRINT(x) do { printf x; } while (0)
#else
#define DEBUG_PRINT(x) do { } while (0)
#endif

#define MIN(a, b) (((a) < (b)) ? (a) : (b)) // Define uma macro para obter o valor mínimo

//BUTTONS ENUMERATION   Numeros são usados para acessar a 

#define btn_set						0  
#define btn_init					1
#define btn_D13					    0
#define btn_D14					    1



//States
#define	standby							0
#define	update_date			            1
#define	show_timers			        	2
#define	pag_timers_1					3
#define	pag_timers_2			        4
#define	pag_timers_3			        5
#define	pag_timers_4			        6
#define	working					       	7


/*
"TOUCH_PAD_NUM0", //GPIO4
"TOUCH_PAD_NUM1", //GPIO0
"TOUCH_PAD_NUM2", //GPIO2
"TOUCH_PAD_NUM3", //GPIO15 
"TOUCH_PAD_NUM4"  //GPIO13
"TOUCH_PAD_NUM5", //GPIO12
"TOUCH_PAD_NUM6", //GPIO14
"TOUCH_PAD_NUM7", //GPIO27
"TOUCH_PAD_NUM8"  //GPIO33
"TOUCH_PAD_NUM9", //GPIO32
*/


#endif /* MAIN_DEFINES_H_ */
