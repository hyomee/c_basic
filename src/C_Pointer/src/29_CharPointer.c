#include <stdio.h>

void funCharPointer() {
	printf("\n***** funCharPointer() *****\n");
	char char01 = 'a' 		;	// ������ ���� 'a'����
	char *str01 = "C Lang"  ;	// �����Ϳ� ���� "C Lang"�� �ּ� ����

	printf("char01 :: %c\n", char01);
	printf("&str01 :: %p\n", &str01) ;
	printf("str01  :: %s\n", str01) ;
}
