/**
 * @file 1031.c
 * @author your name (you@domain.com)
 * @brief 10진 정수 1개 입력받아 8진수로 출력하기
    10진수를 입력받아 8진수(octal)로 출력
    -> 주의 사항: 데이터형
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
	printf("%o", n);
	return 0;
}