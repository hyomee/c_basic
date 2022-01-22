/*
 ============================================================================
 Name        : C_Struct.c
 Author      : Hyomee
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "user.h"

int main(void) {
	printf("!!! 구조체 !!!\n");
	funcPrintNation("대한민국");
	NATIONS na = "영국";
	funcPrintNation(na);
	printf("\n***** 자동차 struct ******\n");
	funViewCars();
	printf("\n***** 자동차 typedef struct ******\n");
	funViewCarsTypedef();
	printf("\n***** 자동차 전역 변수 ******\n");
	funViewCarsGlobal();
	printf("\n***** 자동차 익명 ******\n");
	funViewCarsGlobal();
	printf("\n***** 공용체 ******\n");
	funViewClass();
	printf("\n***** 열거형 ******\n");
	funEnum();
	return EXIT_SUCCESS;
}


