/*
 * Union.c
 *
 *  Created on: 2022. 1. 20.
 *      Author: ASUS
 */
#include <stdio.h>
#include <string.h>

// ����ü ����
union Class {
	char name[20]; 	 	/* �̸� */
	char subject[20]; 	/* ���� */
	int score ;		  	/* ���� */
};

void funViewClass() {
	// ����ü ����
	union Class class;

	// ����ü �׸� ����
	strcpy(class.name, "ȫ�浿");
	strcpy(class.subject, "����");
	class.score = 70;

	// ����ü �׸� ���
	printf("�̸� : %s\n", class.name);
	printf("���� : %s\n", class.subject);
	printf("���� : %d\n", class.score);
	printf("class size : %d\n", sizeof(class));
}



