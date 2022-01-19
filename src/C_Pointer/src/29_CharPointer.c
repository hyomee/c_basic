#include <stdio.h>

void funCharPointer() {
	printf("\n***** funCharPointer() *****\n");
	char char01 = 'a' 		;	// 변수에 문자 'a'저장
	char *str01 = "C Lang"  ;	// 포인터에 문자 "C Lang"의 주소 저장

	printf("char01 :: %c\n", char01);
	printf("&str01 :: %p\n", &str01) ;
	printf("str01  :: %s\n", str01) ;
}
