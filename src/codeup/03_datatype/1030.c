/**
 * @file 1030.c
 * @author your name (you@domain.com)
 * @brief 정수 1개 입력받아 그대로 출력하기3
    정수 1개를 입력받아 그대로 출력해보자.
    단, 입력되는 정수의 범위는 -9,223,372,036,854,775,808 ~ +9,223,372,036,854,775,807 이다
    입력 : 정수 1개가 입력된다. 단, 입력되는 정수의 범위는 -9223372036854775808 ~ +9223372036854775807 이다.
    출력 : 입력된 정수를 그대로 출력
 * @version 0.1
 * @date 2022-01-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main() {
	long long int n;
    scanf("%lld", &n);
    printf("%lld", n);
	return 0;
}