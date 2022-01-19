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
// 함수는 선언 하지 않아도 됨
extern void funCharPointer(void);

int main(void) {
	funRunArrayPointer();
	funCharPointer();
	return 0;
}
