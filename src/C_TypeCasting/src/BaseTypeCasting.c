#include <stdio.h>

void funBaseTypeCasting() {
	printf("!!! 기본 자료 형 변환 !!!\n");
	int num01 = 127;
	int num02 = 5;
	float numf ;



	numf = num01/num02;
	printf("%f\n", numf);  // 25.000000

	numf = (float) num01/num02;
	printf("%f\n", numf);  // 25.400000

	int numf04 = 0x12345678;
	short num04;
	num04 = (short) numf04;
	printf("0x%X\n", numf04);  // 0x12345678
	printf("0x%X\n", num04);   // 0x5678
}
