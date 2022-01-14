/**
 * @file 1062.c
 * @author your name (you@domain.com)
 * @brief 비트단위로 XOR 하여 출력하기
    입력된 정수 두 개를 비트단위로 xor 연산한 후 그 결과를 정수로 출력해보자.
    입력 : 2개의 정수가 공백을 두고 입력된다. -2147483648 ~ +2147483647
    출력 : 두 정수를 비트단위(bitwise)로 xor 계산을 수행한 결과를 10진수로 출력한다
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
	printf("%d", num1^num2);
	return 0;
}