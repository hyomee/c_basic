/*
 ============================================================================
 Name        : C_Function.c
 Author      : Hyomee
 Version     :
 Copyright   : Your copyright notice
 Description : C��� �Լ�
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "StructCar.h"

extern int *funPointer() ;
extern struct Car getCar();

int main(void) {

	printf("!!! pointer ��ȯ �Լ� !!!\n");
	int *ptrRn =  funPointer();
	printf("%d", *ptrRn );

	struct Car cars= getCar();
	printf("\n%s", cars.name );
	return EXIT_SUCCESS;
}
