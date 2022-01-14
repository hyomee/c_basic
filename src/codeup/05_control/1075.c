/**
 * @file 1075.c
 * @author your name (you@domain.com)
 * @brief 정수 1개 입력받아 카운트다운 출력하기2
   정수(1 ~ 100) 1개가 입력되었을 때 카운트다운을 출력해보자.
   입력 : 정수 1개가 입력된다. (1 ~ 100)
   출력 : 1씩 줄이면서 한 줄에 하나씩 0이 될 때까지 출력한다.
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
	while (num > 0) {
	    printf("%d\n", --num);
	}
	return 0;
}