/**
 * @file 1040.c
 * @author your name (you@domain.com)
 * @brief 정수 1개 입력받아 부호 바꿔 출력하기
   입력된 정수의 부호를 바꿔 출력해보자.
    단, -2147483647 ~ +2147483647 범위의 정수가 입력된다.
   입력 : 정수 1개가 입력
   출력 : 부호를 바꿔 출력
 * @version 0.1
 * @date 2022-01-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	printf("%d", -a);
	return 0;
}