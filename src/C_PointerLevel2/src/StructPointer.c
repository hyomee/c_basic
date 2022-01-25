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
	student[0] = (STUDENT) {"ȫ�浿", 19, "����� ���ı� ���̵�" };
	student[1] = (STUDENT) {"ȫ�繫", 18, "����� ���ı� õȣ��" };

	printf("\n===== �迭 �Ӿ� ����ü ======\n");
	for ( index = 0 ; index < 2; index ++) {

		printf("  �̸�	: %s\n", student[index].name);
		printf("  ����	: %d\n", student[index].age);
		printf("  �ּ�	: %s\n", student[index].address);
	}
}


void funStructPoinerMallocSingle() {
	// ����ü Pointer ���� , �޸� �Ҵ�
	struct Customer *customer = malloc(sizeof(struct Customer));

	printf("\n===== ����ü �޸� �Ҵ� ���� ======\n");
	// ������ ����
	strcpy(customer->name, "ȫ�浿");
	customer->age = 30;
	strcpy((*customer).address, "����� ���ı� ���̵�");

	// ���
	printf("�̸� : %s\n", customer->name);		// �̸� : ȫ�浿
	printf("���� : %d\n", customer->age);		// ���� : 30
	printf("�ּ� : %s\n", (*customer).address);	// �ּ� : ����� ���ı� ���̵�

	free(customer);
}

void funStructPoinerMallocMulti() {
	int index;
	int customerCount = 3;

	// ����ü Pointer ���� , �޸� �Ҵ�
	struct Customer *customer = malloc(sizeof(struct Customer)*customerCount);

	printf("\n===== ����ü �޸� �Ҵ� ���� ======\n");

	// ������ ����
	strcpy(customer->name, "ȫ�浿");
	customer->age = 30;
	strcpy((*customer).address, "����� ���ı� ���̵�");

	strcpy((customer+1)->name, "ȫ�絿");
	(customer+1)->age = 20;
	strcpy((*(customer+1)).address, "����� ������ õȣ��");

	*(customer+2) = (struct Customer) {"�ٵ���", 20, "����� ������ �浿"} ;

	// ���
	for ( index = 0 ; index < customerCount; index ++) {
		printf("�̸� : %s\n", (customer+1)->name);
		printf("���� : %d\n", (customer+1)->age);
		printf("�ּ� : %s\n", (*(customer+index)).address);
	}

	free(customer);
}




void funStructStruct() {

	SCHOOL school;
	strcpy(school.name, "�����б�");
	strcpy(school.class.name, "1�г�");
	strcpy(school.class.student.name, "ȫ�浿");
	school.class.student.age = 19;
	strcpy(school.class.student.address, "����� ���ı� ���̵�");

	printf("\n===== ����ü > ����ü > ����ü  ======\n");
	printf("�б���	: %s\n", school.name);
	printf(" �г�	: %s\n", school.class.name);
	printf("  �̸�	: %s\n", school.class.student.name);
	printf("  ����	: %d\n", school.class.student.age);
	printf("  �ּ�	: %s\n", school.class.student.address);

}

void *funStructReturn(void) {
	STUDENT *student = malloc(sizeof(STUDENT));
	void *vStudentPtr;

	student->age  = 19;
	strcpy(student->address, "����� ���ı� ���̵�");
	strcpy(student->name, "ȫ�뵿");

	vStudentPtr = student;
	free(student);
	return vStudentPtr;
}

void funStructReturnMain(void) {
	STUDENT student = *(STUDENT *)funStructReturn();
	printf("\n===== ����ü ��ȯ  ======\n");

	printf(" �̸�	: %s\n", student.name);
	printf(" �ּ�	: %s\n", student.address);
	printf(" ����	: %d\n", student.age);
}

