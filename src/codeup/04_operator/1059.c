/**
 * @file 1059.c
 * @author your name (you@domain.com)
 * @brief 비트단위로 NOT 하여 출력하기
   입력 된 정수를 비트단위로 참/거짓을 바꾼 후 정수로 출력해보자.
   입력 : 정수 1개가 입력된다. -2147483648 ~ +2147483647
   출력 : 비트 단위로 1 -> 0, 0 -> 1로 바꾼 후 그 값을 10진수로 출력한다.
   --  2의 보수 표현법으로 저장
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
	printf("%d", ~num);
	return 0;
}