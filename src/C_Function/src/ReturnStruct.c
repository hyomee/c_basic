/*
 * ReturnStruct.c
 *
 *  Created on: 2022. 1. 23.
 *      Author: ASUS
 */
#include <string.h>
#include "StructCar.h"


struct Car  getCar() {
	struct Car car ;

	strcpy(car.name, "�Ÿ");
	car.price = 100000;

	return car;
}
