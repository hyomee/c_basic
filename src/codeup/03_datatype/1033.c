/**
 * @file 1033.c
 * @author your name (you@domain.com)
 * @brief 10진 정수 입력받아 16진수로 출력하기
    10진수를 입력받아 16진수(hexadecimal)로 출력
    입력 : 10진수 1개가 입력
    출력 : 16진수(대문자)로 출력
 * @version 0.1
 * @date 2022-01-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	printf("%X", n);
	return 0;
}