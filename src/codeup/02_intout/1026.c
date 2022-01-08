/**
 * @file 1026.c
 * @author your name (you@domain.com)
 * @brief 시분초 입력받아 분만 출력하기
    입력되는 시:분:초 에서 분만 출력
    입력 : 시 분 초가 시:분:초 형식으로 입력
    출력 : 분
 * @version 0.1
 * @date 2022-01-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main() {
	int h, m, s;
    scanf("%d:%d:%d", &h, &m, &s);
	printf("%d", m);
	return 0;
}