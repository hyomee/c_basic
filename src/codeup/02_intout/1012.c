/**
 * @file 1012.c
 * @author your name (you@domain.com)
 * @brief 실수 1개 입력받아 그대로 출력하기
    실수형(float)로 변수를 선언하고 그 변수에 실수값을 저장한 후
    저장되어 있는 실수값을 출력
    -> 주의 사항: 실수형 자료형 (float, %f)
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
	printf("%f", f);
    return 0;
}