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
extern void voidPointer(void);
extern void voidPointerParamReturn(void);
extern void funStructReturnMain(void);
int main(void) {
	funStructArray();
	funStructPoinerMallocSingle();
	funStructPoinerMallocMulti();
	funStructStruct();
	funStructReturnMain();
	voidPointer();
	voidPointerParamReturn();
	return 0;
}
