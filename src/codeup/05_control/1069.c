/**
 * @file 1069.c
 * @author your name (you@domain.com)
 * @brief 평가 입력받아 다르게 출력하기
   평가를 문자(A, B, C, D, ...)로 입력받아 내용을 다르게 출력해보자.
    평가 내용
    평가 : 내용
    A : best!!!
    B : good!!
    C : run!
    D : slowly~
    나머지 문자들 : what?
   입력 : 영문자 1개가 입력된다. (A, B, C, D 등의 한 문자가 입력된다.)
   출력 : 평가내용에 따라 다른 내용이 출력된다.
 * @version 0.1
 * @date 2022-01-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main() {
	char grade;
	scanf("%c", &grade);
	switch (grade) {
	    case 'A':
	        printf("best!!!\n");
	        break;
	    case 'B':
	        printf("good!!\n");
	        break;
	    case 'C':
	        printf("run!\n");
	        break;
	    case 'D':
	        printf("slowly~\n");
	        break;
	   default:
	        printf("what?\n");
	        break;
	}
	return 0;
}