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
	printf("�Լ�Ȯ�� !!!\n");
	functionDynamicArgment(1, 10);
	functionDynamicArgment(2, 10, 20);
	functionPointer();

	return EXIT_SUCCESS;
}

void functionDynamicArgment(int args, ...) {
	printf("%d, ", args);
}

void function01() {
	printf("�� �Լ� ....\n");
}

void funPointerBase() {
	// �Լ������� ����
	void (*funNum)();

	// �Լ� �����Ϳ� �Լ� �Ҵ�
	funNum = function01;
	printf("\n�Լ� ������ ����\n");
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

	// �Լ� ������ ����
	int (*funAdd)(int, int) = &funPointerTest;
	int num = funPointerExpCall(funAdd(12,6));

	printf("\nfunAdd : %d\n", num);
}



void funPointerExp() {

	int num ;
	// �Լ������� ����
	int (*funAdd)(int, int);
	// �Լ� �����Ϳ� �Լ� �Ҵ�
	funAdd = funPointerTest;
	// �Լ� ������ ����
	num = funAdd(5, 6);

	printf("\nfunAdd : %d\n", num);
}

void functionPointer() {
	printf("\n�Լ� �ּ� function01() :: %p\n", function01);
	function01();
	funPointerBase();
	funPointerExp();
	funPointerExpCallback();
}


