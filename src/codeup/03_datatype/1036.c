/**
 * @file 1036.c
 * @author your name (you@domain.com)
 * @brief 영문자 1개 입력받아 10진수로 출력하기
    입력 : 영문자 1개가 입력
    출력 : 아스키코드 값을 10진수로 출력
 * @version 0.1
 * @date 2022-01-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main() {
	char a;
	scanf("%c", &a);
	printf("%d", a);
	return 0;
}