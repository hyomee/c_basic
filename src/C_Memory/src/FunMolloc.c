/*
 * void funMolloc.c
 *
 *  Created on: 2022. 1. 23.
 *      Author: ASUS
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void funStaticDynamicMemory(void);
void funSetDynamicMemory();
void funSetAllMemory();
void funMolloc(void);

void funMollocMain(void) {
	funStaticDynamicMemory();
	funSetDynamicMemory();
	funSetAllMemory();
	funMolloc();
}

void funStaticDynamicMemory(void) {
	printf("=== 정적 할당 .. 동적 할당 \n");
	int num = 10;
	int *pNum = &num;
	int *pDNum = (int *) malloc(sizeof(int));
	int *pDNum_01 = (int *) malloc(sizeof(int)*2);


	printf("pNum 주소 	:: %p\n", &pNum);
	printf("pDNum 주소	:: %p\n", &pDNum);
	printf("pDNum_01 주소	:: %p\n", &pDNum_01);
	free(pDNum);
	free(pDNum_01);
}

void funSetDynamicMemory(void) {
	printf("=== 메모리 저장 \n");
	int *pDNum = (int *) malloc(sizeof(int));
	*pDNum = 10;

	printf("메모리 저장 pDNum 	:: %d\n", *pDNum);
	free(pDNum);
}

void funMolloc(void) {
	printf("동적 할당 \n");
	int index;
	short *ptr = (short *) malloc(100);

	for ( index = 0; index < 50; index++) {
		*(ptr + index) = index + 10;
	}

	printf("0x%X\n", ptr);  	    // 0xB97650
	printf("%d\n", *(ptr + 1));  	// 11
	printf("%d\n", *(ptr + 49));	// 59
	printf("%d\n", *(ptr + 50));	// 0
	free(ptr);
}

void funSetAllMemory() {
	printf("동적 할당 - 전체 초기화  \n");
	int *numPtr = (int *) malloc(sizeof(int)*2);
	memset(numPtr, 0x10, sizeof(int)*2);
	printf("0x%X\n", *numPtr);		// 0x10101010
	free(numPtr);
}


