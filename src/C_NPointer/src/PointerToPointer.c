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

	printf("\n*** 1차원 포인터 + 1차원 포인터 ===\n");
	printf("num 	: 0x%X\n", num);
	printf("pNum01 	: 0x%X\n", *pNum01);
	printf("pNum02 	: 0x%X\n", *pNum02);

	num = 20;
	printf("\n===    num 20으로 변경 후     ===\n");
	printf("num 	: 0x%X\n", num);
	printf("pNum01 	: 0x%X\n", *pNum01);
	printf("pNum02 	: 0x%X\n", *pNum02);

}

void pointPoint() {

	int num = 10;
	int *pNum01 = &num;
	int **pNum02 = &pNum01;

	printf("\n***    2차원 포인터    ===\n");
	printf("num 	: 0x%X\n", num);
	printf("pNum01 	: 0x%X\n", *pNum01);
	printf("pNum02 	: 0x%X\n", **pNum02);

	num = 20;
	printf("\n=== num 20으로 변경 후 ===\n");
	printf("num 	: 0x%X\n", num);
	printf("pNum01 	: 0x%X\n", *pNum01);
	printf("pNum02 	: 0x%X\n", **pNum02);

}


