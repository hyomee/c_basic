/**
 * @file 1029.c
 * @author your name (you@domain.com)
 * @brief 실수 1개 입력받아 그대로 출력하기2
    실수 1개를 입력받아 그대로 출력해보자.
    (단, 입력되는 실수의 범위는 +- 1.7*10-308 ~ +- 1.7*10308 이다.) 
    입력 : 소수점 아래 숫자가 11개 이하인 실수 1개가 입력된다.
        (단, 입력되는 실수의 범위는 +- 1.7*10-308 ~ +- 1.7*10308 이다.)
    출략 : 입력된 실수를 소수점 이하 11자리까지 반올림하여 출력
    -> 주의 사항: 자료형 범위
 * @version 0.1
 * @date 2022-01-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main() {
	double d;
    scanf("%lf", &d);
    printf("%.11lf", d);
	return 0;
}