/*
 ============================================================================
 Name        : C_Pointer.c
 Author      : Hyomee
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

extern void funRunArrayPointer(void);
// �Լ��� ���� ���� �ʾƵ� ��
extern void funCharPointer(void);

int main(void) {
	funRunArrayPointer();
	funCharPointer();
	return 0;
}
