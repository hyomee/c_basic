#include <stdio.h>


/**
 * �迭 ǥ�� ���� ������ �Լ� ǥ����� ǥ�� �� �� �ִ�.
 */
void funRunArrayPointer(void) {
	printf("\n***** funRunArrayPointer() *****\n");
	int num[2] = {0x12345678, 0x87654321};

	printf("num[1]   :: 0x%X\n", num[1]);
	printf("*(num+1) :: 0x%X\n", *(num+1));
	printf("num[2]�� ù��° Byte�� 0x11�� ����\n");

	*(char *)(num+1) = 0x11;

	printf("num[1]   :: 0x%X\n", num[1]);
	printf("*(num+1) :: 0x%X\n", *(num+1));

}
