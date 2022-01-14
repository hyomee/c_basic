/**
 * @file 1037.c
 * @author your name (you@domain.com)
 * @brief 정수 2개를 입력받아 합을 출력해보자.
    단, 입력되는 정수는 -2147483648 ~ +2147483648 이다.
    입력 : 2개의 정수가 공백으로 구분되어 입력된다.
    출력 : 두 정수의 합을 출력한다.
 * @version 0.1
 * @date 2022-01-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main() {
	long long a, b;
	scanf("%lld %lld", &a, &b);
	printf("%lld + %lld = %lld", a, b, a+b);
	return 0;
}