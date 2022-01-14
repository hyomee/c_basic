/**
 * @file 1070.c
 * @author your name (you@domain.com)
 * @brief 월 입력받아 계절 출력하기
   월이 입력될 때 계절 이름이 출력되도록 해보자.
    예
    월 : 계절 이름
    12, 1, 2 : winter
    3, 4, 5 : spring
    6, 7, 8 : summer
    9, 10, 11 : fall
   입력 : 월을 의미하는 1개의 정수가 입력된다.(1 ~ 12)
   출력 : 계절 이름을 출력한다.
 * @version 0.1
 * @date 2022-01-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main() {
	int m;
	scanf("%d", &m);
	
	switch (m) {
	    case 1:
	    case 2:
	    case 12:
	        printf("winter\n");
	        break;
	    case 3:
	    case 4:
	    case 5:
	        printf("spring\n");
	        break;
	    case 6:
	    case 7:
	    case 8:
	        printf("summer\n");
	        break;
	    case 9:
	    case 10:
	    case 11:
	        printf("fall\n");
	        break;
	    default:
	        break;
	}
	return 0;
}