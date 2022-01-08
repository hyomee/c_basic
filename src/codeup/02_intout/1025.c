/**
 * @file 1025.c
 * @author your name (you@domain.com)
 * @brief 정수 1개 입력받아 나누어 출력하기
    다섯 자리의 정수 1개를 입력받아 각 자리별로 나누어 출력
    입력 : 다섯 자리로 이루어진 1개의 정수를 입력받는다.
          (단, 10,000 <= 입력받는 수 <= 99,999 )
    출력 : 각 자리의 숫자를 분리해 한 줄에 하나씩 [ ]속에 넣어 출력
    -> 주의 사항: 자릿값
 * @version 0.1
 * @date 2022-01-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main() {
	int a, b, c, d, e;
	scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);
	printf("\[%d\]\n\[%d\]\n\[%d\]\n\[%d\]\n\[%d\]\n", a*10000, b*1000, c* 100, d*10, e);
	return 0;
}