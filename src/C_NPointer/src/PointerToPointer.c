/*
 * PointerToPointer.c
 *
 *  Created on: 2022. 1. 26.
 *      Author: ASUS
 */
#include <stdio.h>
#include <stdlib.h>

void pointToPoint() {

	int num = 10;
	int *pNum01 = &num;
	int *pNum02 = &pNum01;

	printf("\n*** 1���� ������ + 1���� ������ ===\n");
	printf("num 	: 0x%X\n", num);
	printf("pNum01 	: 0x%X\n", *pNum01);
	printf("pNum02 	: 0x%X\n", *pNum02);

	num = 20;
	printf("\n===    num 20���� ���� ��     ===\n");
	printf("num 	: 0x%X\n", num);
	printf("pNum01 	: 0x%X\n", *pNum01);
	printf("pNum02 	: 0x%X\n", *pNum02);

}

void pointPoint() {

	int num = 10;
	int *pNum01 = &num;
	int **pNum02 = &pNum01;

	printf("\n***    2���� ������    ===\n");
	printf("num 	: 0x%X\n", num);
	printf("pNum01 	: 0x%X\n", *pNum01);
	printf("pNum02 	: 0x%X\n", **pNum02);

	num = 20;
	printf("\n=== num 20���� ���� �� ===\n");
	printf("num 	: 0x%X\n", num);
	printf("pNum01 	: 0x%X\n", *pNum01);
	printf("pNum02 	: 0x%X\n", **pNum02);

}


