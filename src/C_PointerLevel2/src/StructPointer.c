/*
 * StructPointer.c
 *
 *  Created on: 2022. 1. 24.
 *      Author: ASUS
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Customer {
	char name[20];
	int age;
	char address[200];
};

typedef struct Student  {
	char name[20];
	int age;
	char address[200];
} STUDENT ;

typedef struct Class  {
	char name[20];
	STUDENT student;
} CLASS ;

typedef struct School {
	char name[20];
	CLASS class;
} SCHOOL ;


void funStructArray() {
	int index ;
	STUDENT student[2];
	student[0] = (STUDENT) {"홍길동", 19, "서울시 송파구 방이동" };
	student[1] = (STUDENT) {"홍당무", 18, "서울시 송파구 천호동" };

	printf("\n===== 배열 속애 구조체 ======\n");
	for ( index = 0 ; index < 2; index ++) {

		printf("  이름	: %s\n", student[index].name);
		printf("  나이	: %d\n", student[index].age);
		printf("  주소	: %s\n", student[index].address);
	}
}


void funStructPoinerMallocSingle() {
	// 구조체 Pointer 선언 , 메모리 할당
	struct Customer *customer = malloc(sizeof(struct Customer));

	printf("\n===== 구조체 메모리 할당 단일 ======\n");
	// 데이터 설정
	strcpy(customer->name, "홍길동");
	customer->age = 30;
	strcpy((*customer).address, "서울시 송파구 방이동");

	// 출력
	printf("이름 : %s\n", customer->name);		// 이름 : 홍길동
	printf("나이 : %d\n", customer->age);		// 나이 : 30
	printf("주소 : %s\n", (*customer).address);	// 주소 : 서울시 송파구 방이동

	free(customer);
}

void funStructPoinerMallocMulti() {
	int index;
	int customerCount = 3;

	// 구조체 Pointer 선언 , 메모리 할당
	struct Customer *customer = malloc(sizeof(struct Customer)*customerCount);

	printf("\n===== 구조체 메모리 할당 복수 ======\n");

	// 데이터 설정
	strcpy(customer->name, "홍길동");
	customer->age = 30;
	strcpy((*customer).address, "서울시 송파구 방이동");

	strcpy((customer+1)->name, "홍당동");
	(customer+1)->age = 20;
	strcpy((*(customer+1)).address, "서울시 강동구 천호동");

	*(customer+2) = (struct Customer) {"바둑이", 20, "서울시 강동구 길동"} ;

	// 출력
	for ( index = 0 ; index < customerCount; index ++) {
		printf("이름 : %s\n", (customer+1)->name);
		printf("나이 : %d\n", (customer+1)->age);
		printf("주소 : %s\n", (*(customer+index)).address);
	}

	free(customer);
}




void funStructStruct() {

	SCHOOL school;
	strcpy(school.name, "서울학교");
	strcpy(school.class.name, "1학년");
	strcpy(school.class.student.name, "홍길동");
	school.class.student.age = 19;
	strcpy(school.class.student.address, "서울시 송파구 방이동");

	printf("\n===== 구조체 > 구조체 > 구조체  ======\n");
	printf("학교명	: %s\n", school.name);
	printf(" 학년	: %s\n", school.class.name);
	printf("  이름	: %s\n", school.class.student.name);
	printf("  나이	: %d\n", school.class.student.age);
	printf("  주소	: %s\n", school.class.student.address);

}

void *funStructReturn(void) {
	STUDENT *student = malloc(sizeof(STUDENT));
	void *vStudentPtr;

	student->age  = 19;
	strcpy(student->address, "서울시 송파구 방이동");
	strcpy(student->name, "홍깅동");

	vStudentPtr = student;
	free(student);
	return vStudentPtr;
}

void funStructReturnMain(void) {
	STUDENT student = *(STUDENT *)funStructReturn();
	printf("\n===== 구조체 반환  ======\n");

	printf(" 이름	: %s\n", student.name);
	printf(" 주소	: %s\n", student.address);
	printf(" 나이	: %d\n", student.age);
}

