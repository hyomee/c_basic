/**
 * @file 1047.c
 * @author your name (you@domain.com)
 * @brief 정수 1개를 입력받아 2배 곱해 출력해보자.
    입력 : 정수 한 개가 입력
    출력 : 2배 곱한 정수를 출력
    -- 비트시프트
 * @version 0.1
 * @date 2022-01-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main() {
    int num;
	scanf("%d", &num);
	printf("%d", num<<1);	 // 	#printf("%d", num*2); 
	return 0;
}