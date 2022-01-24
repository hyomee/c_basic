/*
 ============================================================================
 Name        : C_Memory.c
 Author      : Hyomee
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

extern int funStack(int paramNum01, int paramNum02);
extern void funMollocMain(void);

int main(void) {
	puts("!!! ¸Þ¸ð¸® Èúµù !!!");
	int result = funStack(5, 10);
	printf("%d\n", result);
	funMollocMain();
	return EXIT_SUCCESS;
}
