/*
 * Struct.c
 *
 *  Created on: 2022. 1. 20.
 *      Author: ASUS
 */
#include <stdio.h>
#include <string.h>

// ����ü ����
struct Cars {
	char name[20]; 	  /* �ڵ��� �̸� */
	char company[20]; /* �ڵ��� ȸ�� */
	int price ;		  /* ���� */
};

void funViewCars() {
	// ����ü ����
	struct Cars cars;

	// ����ü �׸� ����
	strcpy(cars.name, "�ҳ�Ÿ");
	strcpy(cars.company, "�����ڵ���");
	cars.price = 1000000;

	// ����ü �׸� ���
	printf("�ڵ��� �̸� : %s\n", cars.name);
	printf("�ڵ��� ȸ�� : %s\n", cars.company);
	printf("�ڵ��� ���� : %d\n", cars.price);
}


