/**
 * @file 1028.c
 * @author your name (you@domain.com)
 * @brief 정수 1개 입력받아 그대로 출력하기2
    정수 1개를 입력받아 그대로 출력해보자.
    (단, 입력되는 정수의 범위는 0 ~ 4,294,967,295 이다.) 
    입력 : 정수 1개가 입력된다. (단, 입력되는 정수의 범위는 0 ~ 4294967295 이다.)
    출력 : 입력된 정수를 그대로 출력
    -> 주의 사항: 데이터형
 * @version 0.1
 * @date 2022-01-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main() {
	unsigned int n;
    scanf("%u", &n);
    printf("%u", n);
	return 0;
}