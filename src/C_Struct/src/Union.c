/*
 * Union.c
 *
 *  Created on: 2022. 1. 20.
 *      Author: ASUS
 */
#include <stdio.h>
#include <string.h>

// 공용체 정의
union Class {
	char name[20]; 	 	/* 이름 */
	char subject[20]; 	/* 과목 */
	int score ;		  	/* 가격 */
};

void funViewClass() {
	// 공용체 선언
	union Class class;

	// 공용체 항목 설정
	strcpy(class.name, "홍길동");
	strcpy(class.subject, "국사");
	class.score = 70;

	// 공용체 항목 사용
	printf("이름 : %s\n", class.name);
	printf("과목 : %s\n", class.subject);
	printf("가격 : %d\n", class.score);
	printf("class size : %d\n", sizeof(class));
}



