/**
 * @file 1053.c
 * @author your name (you@domain.com)
 * @brief 참 거짓 바꾸기
   1(true, 참) 또는 0(false, 거짓) 이 입력되었을 때 반대로 출력하는 프로그램을 작성해보자.
   입력 : 정수 1개가 입력된다.(단, 0 또는 1 만 입력된다.)
   출력 : 입력된 값이 0이면 1, 1이면 0을 출력한다.
 * @version 0.1
 * @date 2022-01-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);
	printf("%d", !num);
	return 0;
}