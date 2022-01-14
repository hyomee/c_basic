/**
 * @file 1054.c
 * @author your name (you@domain.com)
 * @brief 둘 다 참일 경우만 참 출력하기
   두 개의 참(1) 또는 거짓(0)이 입력될 때, 모두 참일 때에만 참을 출력하는 프로그램을 작성해보자.
   입력 : 1 또는 0의 값만 가지는 2개의 정수가 공백을 두고 입력된다.
   출력 : 둘 다 참(1)일 경우에만 1을 출력하고, 그 외의 경우에는 0을 출력한다.
 * @version 0.1
 * @date 2022-01-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main() {
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	printf("%d", num1&&num2);
	return 0;
}