/**
 * @file 1041.c
 * @author your name (you@domain.com)
 * @brief  문자 1개 입력받아 다음 문자 출력하기
    영문자 1개를 입력받아 그 다음 문자를 출력해보자.
    영문자 'A'의 다음 문자는 'B'이고, 영문자 '0'의 다음 문자는 '1'이다.
    입력 : 영문자 1개가 입력
    출력 : 다음 문자를 출력
    -- 문자도 값으로 덧셈
 * @version 0.1
 * @date 2022-01-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main() {
	char a;
	scanf("%c", &a);	// %s도 가능
	printf("%c", a+1);
	return 0;
}