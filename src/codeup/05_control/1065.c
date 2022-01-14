/**
 * @file 1065.c
 * @author your name (you@domain.com)
 * @brief 정수 3개 입력받아 짝수만 출력하기
   세 정수 a, b, c가 입력되었을 때, 짝수만 출력해보자.
   입력 : 세 정수 a, b, c 가 공백을 두고 입력된다.
         0 ~ +2147483647 범위의 정수들이 입력되며 적어도 1개는 짝수이다.
   출력 : 짝수만 순서대로 줄을 바꿔 출력한다.
 * @version 0.1
 * @date 2022-01-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main() {
	int a, b, c;
	int inArr[3];
	scanf("%d %d %d", &inArr[0], &inArr[1], &inArr[2]);
	
	for(int i=0; i<3; i++) {
	    if (inArr[i]%2==0) {
	        printf("%d\n", inArr[i]);
	    }
	}
	
	return 0;
}