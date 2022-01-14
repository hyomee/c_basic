/**
 * @file 1063.c
 * @author your name (you@domain.com)
 * @brief 두 정수 입력받아 큰 수 출력하기
   입력된 두 정수 a, b 중 큰 값을 출력하는 프로그램을 작성해보자.
   단, 조건문을 사용하지 않고 3항 연산자 ? 를 사용한다.  
   입력 : 두 정수가 공백을 두고 입력된다. -2147483648 ~ +2147483647
   출력 : 두 정수 중 큰 값을 10진수로 출력한다.
 * @version 0.1
 * @date 2022-01-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a>b ? a:b);
	return 0;
}