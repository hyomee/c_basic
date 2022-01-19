/*
 * AnonymousStruct.c
 *
 *  Created on: 2022. 1. 20.
 *      Author: ASUS
 */

#include <stdio.h>
#include <string.h>

// 구조체 정의
typedef struct {
	char name[20]; 	  /* 자동차 이름 */
	char company[20]; /* 자동차 회사 */
	int price ;		  /* 가격 */
} CARS;

void funViewCarsAnonymous() {
	// 구조체 선언
	CARS cars;

	// 구조체 항목 설정
	strcpy(cars.name, "소나타");
	strcpy(cars.company, "현대자동차");
	cars.price = 1000000;

	// 구조체 항목 사용
	printf("자동차 이름 : %s\n", cars.name);
	printf("자동차 회사 : %s\n", cars.company);
	printf("자동차 가격 : %d\n", cars.price);
}

