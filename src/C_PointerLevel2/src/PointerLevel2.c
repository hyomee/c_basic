/*
 * PointerLevel2.c
 *
 *  Created on: 2022. 1. 24.
 *      Author: ASUS
 */

#include <stdio.h>

extern void funStructArray();
extern void funStructPoinerMallocSingle();
extern void funStructPoinerMallocMulti();
extern void funStructStruct();

int main(void) {
	funStructArray();
	funStructPoinerMallocSingle();
	funStructPoinerMallocMulti();
	funStructStruct();
	return 0;
}
