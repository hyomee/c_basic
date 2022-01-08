/**
 * @file 1037.c
 * @author your name (you@domain.com)
 * @brief 정수 입력받아 아스키 문자로 출력하기
    10진 정수 1개를 입력받아 아스키 문자로 출력해보자.
    단, 0 ~ 255 범위의 정수만 입력된다.
    입력 : 10진 정수 1개(0 ~ 255 범위)가 입력
    출력 : 아스키코드 값을 문자로 출력
 * @version 0.1
 * @date 2022-01-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	printf("%c", a);
	return 0;
}