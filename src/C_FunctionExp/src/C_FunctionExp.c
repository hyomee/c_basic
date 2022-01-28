/*
 ============================================================================
 Name        : C_FunctionExp.c
 Author      : Hyomee
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void functionDynamicArgment(int args, ...);
void functionPointer();

int main(void) {
	printf("함수확장 !!!\n");
	functionDynamicArgment(1, 10);
	functionDynamicArgment(2, 10, 20);
	functionPointer();

	return EXIT_SUCCESS;
}

void functionDynamicArgment(int args, ...) {
	printf("%d, ", args);
}

void function01() {
	printf("난 함수 ....\n");
}

void funPointerBase() {
	// 함수포인터 선언
	void (*funNum)();

	// 함수 포인터에 함수 할당
	funNum = function01;
	printf("\n함수 포인터 실행\n");
	funNum();
}

int funPointerTest(int a, int b) {
	return a + b;
}


int funPointerExpCall(void (*fnAdd)(int, int)) {
	funPointerBase();
	return fnAdd;
}

void funPointerExpCallback() {

	// 함수 포인터 실행
	int (*funAdd)(int, int) = &funPointerTest;
	int num = funPointerExpCall(funAdd(12,6));

	printf("\nfunAdd : %d\n", num);
}



void funPointerExp() {

	int num ;
	// 함수포인터 선언
	int (*funAdd)(int, int);
	// 함수 포인터에 함수 할당
	funAdd = funPointerTest;
	// 함수 포인터 실행
	num = funAdd(5, 6);

	printf("\nfunAdd : %d\n", num);
}

void functionPointer() {
	printf("\n함수 주소 function01() :: %p\n", function01);
	function01();
	funPointerBase();
	funPointerExp();
	funPointerExpCallback();
}


