/*
 * AnonymousStruct.c
 *
 *  Created on: 2022. 1. 20.
 *      Author: ASUS
 */

#include <stdio.h>
#include <string.h>

// ����ü ����
typedef struct {
	char name[20]; 	  /* �ڵ��� �̸� */
	char company[20]; /* �ڵ��� ȸ�� */
	int price ;		  /* ���� */
} CARS;

void funViewCarsAnonymous() {
	// ����ü ����
	CARS cars;

	// ����ü �׸� ����
	strcpy(cars.name, "�ҳ�Ÿ");
	strcpy(cars.company, "�����ڵ���");
	cars.price = 1000000;

	// ����ü �׸� ���
	printf("�ڵ��� �̸� : %s\n", cars.name);
	printf("�ڵ��� ȸ�� : %s\n", cars.company);
	printf("�ڵ��� ���� : %d\n", cars.price);
}

