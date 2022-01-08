/**
 * @file 1023.c
 * @author your name (you@domain.com)
 * @brief 실수 1개 입력받아 부분별로 출력하기
    실수 1개를 입력받아 정수 부분과 실수 부분으로 나누어 출력
    입력 : 실수 1개가 입력된다.
           (단, 입력값은 절댓값이 10000을 넘지 않으며, 소수점 이하 자릿수는 최대 6자리까지이고
            0이 아닌 숫자로 시작한다.)
    출력 : 첫 번째 줄에 정수 부분을, 두 번째 줄에 실수 부분을 출력
 * @version 0.1
 * @date 2022-01-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main() {
	int a, b;
	scanf("%d.%d", &a, &b);
	printf("%d\n%d", a, b);
	return 0;
}