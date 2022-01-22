/*
 * ReturnPoint.c
 *
 *  Created on: 2022. 1. 23.
 *      Author: ASUS
 */


int *funPointer() {
	int num = 100;
	int *ptrNum = &num;

	return ptrNum;
}
