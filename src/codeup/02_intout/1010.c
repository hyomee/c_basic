/**
 * @file 1010.c
 * @author your name (you@domain.com)
 * @brief 정수 1개 입력받아 그대로 출력하기
    정수형(int)으로 변수를 선언하고, 변수에 정수값을 저장한 후
    변수에 저장되어 있는 값을 그대로 출력
    -> 주의 사항: 정수 자료형 (int, %d)
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
	printf("%d", a);
	return 0;
}