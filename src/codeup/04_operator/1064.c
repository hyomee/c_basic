/**
 * @file 1064.c
 * @author your name (you@domain.com)
 * @brief 정수 3개 입력받아 가장 작은 수 출력하기
    입력된 세 정수 a, b, c 중 가장 작은 값을 출력하는 프로그램을 작성해보자.
    단, 조건문을 사용하지 않고 3항 연산자 ? 를 사용한다.
    입력 : 3개의 정수가 공백으로 구분되어 입력된다. -2147483648 ~ +2147483648
    출력 : 가장 작은 값을 출력한다.
 * @version 0.1
 * @date 2022-01-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main() {
	int a, b, c;
    int compa  ;
	scanf("%d %d %d", &a, &b, &c);
    compa = a<b ? a:b;
	printf("%d", compa > c ? c: compa);
	return 0;
}