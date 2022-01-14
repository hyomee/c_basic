/**
 * @file 1051.c
 * @author your name (you@domain.com)
 * @brief 두 정수 입력받아 비교하기3
   두 정수(a, b)를 입력받아 b가 a보다 크거나 같으면 1을, 그렇지 않으면 0을 출력하는 프로그램을 작성해보자.
   입력 : 두 정수 a, b가 공백을 두고 입력된다. -2147483647 <= a, b <= +2147483648
   출력 : b가 a보다 크거나 같은 경우 1을, 그렇지 않은 경우 0을 출력한다.
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
	printf("%d", a<=b);
	return 0;
}