/**
 * @file 1044.c
 * @author your name (you@domain.com)
 * @brief 정수 1개 입력받아 1 더해 출력하기
    정수를 1개 입력받아 1만큼 더해 출력해보자.
    단, -2147483648 ~ +2147483647 의 범위로 입력된다
    입력 : 정수 1개가 입력
    출력 : 입력된 정수에 1을 더해 출력
 * @version 0.1
 * @date 2022-01-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main() {
	long long a;
	scanf("%lld", &a);
	printf("%lld", ++a);
	return 0;
}