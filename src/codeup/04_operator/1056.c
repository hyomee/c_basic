/**
 * @file 1056.c
 * @author your name (you@domain.com)
 * @brief 참/거짓이 서로 다를 때에만 참 출력하기
   두 가지의 참(1) 또는 거짓(0)이 입력될 때, 참/거짓이 서로 다를 때에만 참을 출력하는 프로그램을 작성해보자
   입력 : 1 또는 0의 값만 가지는 2개의 정수가 공백을 두고 입력된다.
   출력 : 참/거짓이 서로 다를 때에만 1을 출력하고, 그 외의 경우에는 0을 출력한다.
 * @version 0.1
 * @date 2022-01-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main() {
	int num1, num2;
    int compa, compb;
	scanf("%d %d", &num1, &num2);
    compa = num1&&!num2;
    compb = !num1&&num2;
	printf("%d", compa||compb);
	return 0;
}