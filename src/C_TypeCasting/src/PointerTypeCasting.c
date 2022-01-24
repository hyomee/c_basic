/*
 * PointerTypeCasting.c
 *
 *  Created on: 2022. 1. 23.
 *      Author: ASUS
 */
#include <stdio.h>

void funPointerTypeCasting01();
void funPointerTypeCasting02();

void funPointerTypeCasting() {
	funPointerTypeCasting01();
	funPointerTypeCasting02();
}

void funPointerTypeCasting01() {
	printf("!!! Pointer �� ��ȯ !!!\n");
	int num = 0x12345678;
	int *ptrNum = &num;
	char *ptrChr;
	printf("*num �ּ�		: %p\n", &num);			// 000000000062FDEC
	printf("*num ��			: 0x%X\n", num);		// 0x12345678
	printf("*ptrNum �ּ�		: %p\n", &ptrNum); 		// 000000000062FDE0
	printf("*ptrNum ��		: 0x%X\n", ptrNum);  	// 0x62FDEC
	printf("*ptrNum ���� ��	: 0x%X\n", *ptrNum);  	// 0x12345678
	printf("*ptrChr �ּ�		: %p\n", &ptrChr); 		// 000000000062FDD8
	printf("*ptrChr ��		: 0x%X\n", ptrChr);  	// 0x10 ( ??? )
	ptrChr = (char *)ptrNum;

	printf("*ptrChr �ּ�		: %p\n", &ptrChr); 		// 000000000062FDD8
	printf("*ptrChr ��		: 0x%X\n", ptrChr);  	// 0x62FDEC
	printf("*ptrChr ���� ��	: 0x%X\n", *ptrChr);  	// 0x78

}

void funPointerTypeCasting02() {
	printf("!!! Pointer �� ��ȯ 02 !!!\n");
	short num = 0x5678;
	short *ptrShort = &num;
	int *ptrInt;
	printf("*num �ּ�		: %p\n", &num);			// 000000000062FDBE
	printf("*num ��			: 0x%X\n", num);		// 0x5678
	printf("*ptrShort �ּ�	: %p\n", &ptrShort); 	// 000000000062FDB0
	printf("*ptrShort ��		: 0x%X\n", ptrShort);  	// 0x62FDBE
	printf("*ptrShort ���� ��	: 0x%X\n", *ptrShort);  // 0x5678
	printf("*ptrInt �ּ�		: %p\n", &ptrInt); 		// 000000000062FDA8
	printf("*ptrInt ��		: 0x%X\n", ptrInt);  	// 0x62FDBC ( ??? )
	ptrInt = (int *)ptrShort;

	printf("*ptrInt �ּ�		: %p\n", &ptrInt); 		// 000000000062FDA8
	printf("*ptrInt ��		: 0x%X\n", ptrInt);  	// 0x62FDBE
	printf("*ptrInt ���� ��	: 0x%X\n", *ptrInt);  	// 0xFDF05678

}

