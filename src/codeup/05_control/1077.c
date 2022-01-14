/**
 * @file 1077.c
 * @author your name (you@domain.com)
 * @brief 정수 1개 입력받아 그 수까지 출력하기
    정수(0 ~ 100) 1개를 입력받아 0부터 그 수까지 순서대로 출력해보자.

    for((반복전 실행/준비 내용); (조건 검사 내용); (한번 실행한 후 처리할 작업))
    { //코드블록
        ...
    }
    반복 구조를 사용하자.
    입력 : 정수 1개가 입력된다. (0 ~ 100)
    출력 : 0부터 그 수까지 줄을 바꿔 한 개씩 출력한다.
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
	for (int i=0; i<=num; i++) {
	    printf("%d\n", i);
	}
	return 0;
}