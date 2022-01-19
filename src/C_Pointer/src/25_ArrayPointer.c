#include <stdio.h>


/**
 * 배열 표기 법은 포인터 함수 표기법을 표시 할 수 있다.
 */
void funRunArrayPointer(void) {
	printf("\n***** funRunArrayPointer() *****\n");
	int num[2] = {0x12345678, 0x87654321};

	printf("num[1]   :: 0x%X\n", num[1]);
	printf("*(num+1) :: 0x%X\n", *(num+1));
	printf("num[2]에 첫번째 Byte룰 0x11로 변경\n");

	*(char *)(num+1) = 0x11;

	printf("num[1]   :: 0x%X\n", num[1]);
	printf("*(num+1) :: 0x%X\n", *(num+1));

}
