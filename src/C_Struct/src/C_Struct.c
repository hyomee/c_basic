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
	printf("!!! ����ü !!!\n");
	funcPrintNation("���ѹα�");
	NATIONS na = "����";
	funcPrintNation(na);
	printf("\n***** �ڵ��� struct ******\n");
	funViewCars();
	printf("\n***** �ڵ��� typedef struct ******\n");
	funViewCarsTypedef();
	printf("\n***** �ڵ��� ���� ���� ******\n");
	funViewCarsGlobal();
	printf("\n***** �ڵ��� �͸� ******\n");
	funViewCarsGlobal();
	printf("\n***** ����ü ******\n");
	funViewClass();
	printf("\n***** ������ ******\n");
	funEnum();
	return EXIT_SUCCESS;
}


