/*
 * enum.c
 *
 *  Created on: 2022. 1. 21.
 *      Author: ASUS
 */
#include <stdio.h>

enum _CAR {
		COMPANY_KIA  = 11,
		COMPANY_HYUNDAI = 21,
		COMPANY_SAMSUNG = 31
} carCompany ;



void funEnum() {
	funBaseEnum();
	funCarCompany(COMPANY_HYUNDAI);

}


void funBaseEnum() {
	enum _LANGUAGE {
			C_LANGUAGE  = 1,
			JAVA_LANGUAGE,
			PYTHON_LANGUAGE
	} ;

	enum _LANGUAGE language;

	language = JAVA_LANGUAGE;

	printf("%d\n", language);
}


void funCarCompany(int carCompany) {
	switch(carCompany) {
		case COMPANY_KIA:
			printf("��� �ڵ��� : %d", carCompany);
			break;
		case COMPANY_SAMSUNG:
			printf("�Ｚ �ڵ��� : %d", carCompany);
			break;
		default:
			printf("���� �ڵ��� : %d", carCompany);
	}
}


