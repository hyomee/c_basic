/**
 * @file 1048.c
 * @author your name (you@domain.com)
 * @brief 한 번에 2의 거듭제곱 배로 출력하기
    정수 2개(a, b)를 입력받아 a를 2b배 곱한 값으로 출력해보자.
    0 <= a <= 10, 0 <= b <= 10
    입력 : 정수 2개가 공백을 두고 입력
    출력 : a 를 2b배 만큼 곱한 값을 출력
    -- 시프트 연산
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
	printf("%d", num1<<num2);
	return 0;
}