/**
 * @file 1005.c
 * @author your name (you@domain.com)
 * @brief 실수 입력받아 둘째 자리까지 출력하기
    실수(float) 1개를 입력받아 저장한 후,
    저장되어 있는 값을 소수점 셋 째 자리에서 반올림하여
    소수점 이하 둘 째 자리까지 출력
    -> 주의 사항: 소수점 형식
 * @version 0.1
 * @date 2022-01-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main() {
	float f;
	scanf("%f", &f);
	printf("%.2f", f);
	return 0;
}