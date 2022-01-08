/**
 * @file 1035.c
 * @author your name (you@domain.com)
 * @brief 16진 정수 1개 입력받아 8진수로 출력하기
    16진수로 입력된 정수 1개를 8진수로 바꾸어 출력  
    입력 : 16진 정수 1개가 입력된다. (단, 16진수는 영문 소문자로 입력된다.)
    출력 : 8진수로 바꾸어 출력
 * @version 0.1
 * @date 2022-01-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main() {
	int n;
	scanf("%x", &n);
	printf("%o", n);
	return 0;
}