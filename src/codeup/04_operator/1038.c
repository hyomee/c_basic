/**
 * @file 1038.c 
 * @author your name (you@domain.com)
 * @brief 정수 2개 입력받아 합 출력하기1
    정수 2개를 입력받아 합을 출력하는 프로그램을 작성해보자.
    (단, 입력되는 정수는 -1073741824 ~ 1073741824 이다.)
    입력 : 2개의 정수가 공백으로 구분되어 입력된다.
    출력 : 두 정수의 합을 출력한다.
    --  입력되는 정수의 범위는 int의 범위지만 두 정수의 합이 int의 범위를 벗어남 
 * @version 0.1
 * @date 2022-01-14
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