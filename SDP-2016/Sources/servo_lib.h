/*
 * servo_lib.h
 *
 * Last update on: 09/04/18
 * Comments: code formatting only
 *
 * Author: Marcelo
 *
 */

#ifndef SOURCES_SERVO_LIB_H_
#define SOURCES_SERVO_LIB_H_

#include "Servomotor.h"

#define MAX_LEFT 	18900
#define CENTER 		18550
#define MAX_RIGHT 	18200
#define RATE		350

void setServoDirection(int direction);
void dc_motors_normalization(double pid_output, int * pwm_left, int * pwm_right);

#endif /* SOURCES_SERVO_LIB_H_ */
