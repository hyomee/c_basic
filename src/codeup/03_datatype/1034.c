/**
 * @file 1034.c
 * @author your name (you@domain.com)
 * @brief 8진 정수 1개 입력받아 10진수로 출력하기
    8진수로 입력된 정수 1개를 10진수로 바꾸어 출력 
    입력 : 8진 정수 1개가 입력
    출력 : 10진수로 바꾸어 출력
 * @version 0.1
 * @date 2022-01-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main() {
	int n;
    scanf("%o", &n);
    printf("%d", n);
	return 0;
}