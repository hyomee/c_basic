/*
 * VoidPointer.c
 *
 *  Created on: 2022. 1. 25.
 *      Author: ASUS
 */
#include <stdio.h>

void *funConvertData(void *ptr, char type);


void voidPointer(void) {
	int num = 10;
	char chA = 'a';

	void *voidPtr;
	printf("===== void 포인터 ㅣ 자유호운 형 변환 =====\n");
	voidPtr = &num;
	printf("void Point : %d\n", *(int *) voidPtr);

	voidPtr = &chA;
	printf("void Point : %c\n", *(char *) voidPtr);
}

void voidPointerParamReturn(void) {
	int num = 100;
	char ch = 'a';

	printf("===== void 포인터 ㅣ 파라메터, 반환 ======\n");
	printf("문자 변환 : %c\n", *((char *) funConvertData(&ch, 'c')));
	printf("정수 변환 : %d\n", *((char *) funConvertData(&num, 'i')));
	printf("실수 변환 : %.1f\n", *((float *) funConvertData(&num, 'f')));

}

void *funConvertData(void *ptr, char type) {
	void *rnVoidPtr;

	if ( type == 'c') {
		*((char *) ptr) += 1;
		rnVoidPtr = (char *) ptr;
	} else if ( type == 'i') {
		*((int *) ptr) += 1;
		rnVoidPtr = (int *) ptr;
	} else {
		*((float *) ptr) += 2.5;
		rnVoidPtr = (float *) ptr;
	}

	return rnVoidPtr;
}


