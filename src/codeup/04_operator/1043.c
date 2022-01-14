/**
 * @file 1043.c
 * @author your name (you@domain.com)
 * @brief 정수 2개 입력받아 나눈 나머지 출력하기
    정수 2개(a, b) 를 입력받아 a를 b로 나눈 나머지를 출력해보자.
    단, 0 <= a, b <= +2147483647, b는 0이 아니다.
    입력 : 정수 2개(a, b)가 공백을 두고 입력
    출력 : a 를 b로 나눈 나머지를 출력
 * @version 0.1
 * @date 2022-01-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a%b);
	return 0;
}