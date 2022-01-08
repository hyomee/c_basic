/**
 * @file 1011.c
 * @author your name (you@domain.com)
 * @brief 문자 1개 입력받아 그대로 출력하기
    문자형(char)으로 변수를 하나 선언하고, 변수에 문자를 저장한 후
    변수에 저장되어 있는 문자를 그대로 출력
    -> 주의 사항: 문자형 자료형 (char, %c)
 * @version 0.1
 * @date 2022-01-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main() {
	char c;
	scanf("%c", &c);
	printf("%c", c);
   	return 0;
}