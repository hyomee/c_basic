/**
 * @file 1068.c
 * @author your name (you@domain.com)
 * @brief 정수 1개 입력받아 평가 출력하기
   점수(정수, 0 ~ 100)를 입력받아 평가를 출력해보자.
   평가 기준
     점수 범위 : 평가
     90 ~ 100 : A
     70 ~   89 : B
     40 ~   69 : C
      0 ~   39 : D
   로 평가되어야 한다
   입력 : 정수(0 ~ 100) 1개가 입력된다.
   출력 : 평가 결과를 출력한다.
 * @version 0.1
 * @date 2022-01-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main() {
	int score;
	scanf("%d", &score);
	
	if (score >= 90 && score <= 100) {
	    printf("A\n");
	}
	else if (score >= 70 && score <= 89) {
	    printf("B\n");
	}
	else if (score >= 40 && score <= 69) {
	    printf("C\n");
	}
	else if (score >= 0 && score <= 39) {
	    printf("D\n");
	}
	
	return 0;
}