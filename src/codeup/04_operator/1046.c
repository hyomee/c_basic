/**
 * @file 1046.c
 * @author your name (you@domain.com)
 * @brief 정수 3개 입력받아 합과 평균 출력하기
   정수 3개를 입력받아 합과 평균을 출력해보자.
    단, -2147483648 ~ +2147483647   
    입력 : 정수 3개가 공백을 두고 입력된다.
    출력 : 합과 평균을 줄을 바꿔 출력한다.
           평균은 소수점 이하 둘째 자리에서 반올림해서 소수점 이하 첫째 자리까지 출력
 * @version 0.1
 * @date 2022-01-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main() {
	long long int a, b, c;
	scanf("%lld %lld %lld", &a, &b, &c);
	printf("%lld\n", a+b+c);
	printf("%.1lf", (float)(a+b+c)/3);
	return 0;
}