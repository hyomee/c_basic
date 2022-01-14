/**
 * @file 1050.c
 * @author your name (you@domain.com)
 * @brief 두 정수 입력받아 비교하기2
   두 정수(a, b)를 입력받아
    a와 b가 같으면 1을, 같지 않으면 0을 출력하는 프로그램을 작성해보자.
   입력 : 두 정수 a, b가 공백을 두고 입력된다.
        -2147483648 <= a, b <= +2147483647 
    출력 : a와 b의 값이 같은 경우 1을, 그렇지 않은 경우 0을 출력한다.
 * @version 0.1
 * @date 2022-01-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a==b);
	return 0;
}