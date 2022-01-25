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
	printf("===== void ������ �� ����ȣ�� �� ��ȯ =====\n");
	voidPtr = &num;
	printf("void Point : %d\n", *(int *) voidPtr);

	voidPtr = &chA;
	printf("void Point : %c\n", *(char *) voidPtr);
}

void voidPointerParamReturn(void) {
	int num = 100;
	char ch = 'a';

	printf("===== void ������ �� �Ķ����, ��ȯ ======\n");
	printf("���� ��ȯ : %c\n", *((char *) funConvertData(&ch, 'c')));
	printf("���� ��ȯ : %d\n", *((char *) funConvertData(&num, 'i')));
	printf("�Ǽ� ��ȯ : %.1f\n", *((float *) funConvertData(&num, 'f')));

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


