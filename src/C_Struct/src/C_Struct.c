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
	return EXIT_SUCCESS;
}


