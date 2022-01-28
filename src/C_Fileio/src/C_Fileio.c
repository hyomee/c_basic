/*
 ============================================================================
 Name        : C_Fileio.c
 Author      : Hyomee
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void funBinaryString();
void funFileRead();
void funFileReadStringNumber();
void funFileWrite();
void funFileWriteRead();
void funFilefWritefRead();

int main(void) {
	printf(" 파일 io !!!\n");
	funBinaryString();
	funFileRead();
	funFileReadStringNumber();
	funFileWrite();
	funFileWriteRead();
	funFilefWritefRead();
	return EXIT_SUCCESS;
}

void funBinaryString() {
	char cha[6] ={ 'a', 'b' };

	printf("sizeof :: %d\n", (int) sizeof(cha));
	printf("strlen :: %d\n", (int) strlen(cha));
}

void funFileRead() {
	char data[64];
	FILE *pFile = fopen("D:\\works\\c_basic\\src\\C_Fileio\\data\\readme.txt", "r");
	if (NULL != pFile) {
		printf("파일 열기 성공\n");
		while(EOF != fscanf(pFile, "%s", &data)) {
			printf("%s\n", data);
		}
		fclose(pFile);
	} else {
		printf("파일 열기 실패");
	}
}


void funFileReadStringNumber() {
	char data[64];
	int num;
	FILE *pFile = fopen("D:\\works\\c_basic\\src\\C_Fileio\\data\\StringNumber.txt", "r");
	if (NULL != pFile) {
		printf("문자 , 숫자로 되어 있는 ====\n");
		fscanf(pFile, "%s %d", &data, &num);
		printf("%s %d\n", data, num);
		fclose(pFile);
	} else {
		printf("파일 열기 실패");
	}
}

void funFileWrite() {
	char data[64] = "C Language";
	int num;
	FILE *pFileW = fopen("D:\\works\\c_basic\\src\\C_Fileio\\data\\FileWriter.txt", "w");

	num = 200;

	int fwcnt = fprintf(pFileW, "%s %d", &data, num);
	printf("파일 쓰기 개수 %d ====\n", fwcnt);
	fclose(pFileW);

	printf("파일 읽기 ====\n");
	FILE *pFileR = fopen("D:\\works\\c_basic\\src\\C_Fileio\\data\\FileWriter.txt", "r");
	if (NULL != pFileR) {
		while(EOF != fscanf(pFileR, "%s", &data)) {
			printf("%s\n", data);
		}
		fclose(pFileR);
	} else {
		printf("파일 열기 실패");
	}

}


void funFileWriteRead() {
	char data[64] = "C 언어 300";
	int num;
	FILE *pFileW = fopen("D:\\works\\c_basic\\src\\C_Fileio\\data\\FileWriterPuts.txt", "w");

	int fwcnt = fputs(data, pFileW);
	printf("파일 쓰기 개수 %d ====\n", fwcnt);
	fclose(pFileW);

	printf("파일 읽기 ====\n");
	char dataR[5];
	FILE *pFileR = fopen("D:\\works\\c_basic\\src\\C_Fileio\\data\\FileWriterPuts.txt", "r");
	if (NULL != pFileR) {
		fgets(dataR, sizeof(dataR), pFileR);
		printf("%s\n", dataR);
		fclose(pFileR);
	} else {
		printf("파일 열기 실패");
	}
}

void funFilefWritefRead() {
	char data[20] = "C Language 300";
	int num;
	FILE *pFileW = fopen("D:\\works\\c_basic\\src\\C_Fileio\\data\\FileWriterfWrite.txt", "w");

	int fwcnt = fwrite(data, sizeof(data), 1 ,pFileW);
	printf("funFilefWritefRead 파일 쓰기 개수 %d ====\n", fwcnt);
	fclose(pFileW);

	printf("funFilefWritefRead 파일 읽기 ====\n");
	char dataR[5] = {0, };
	FILE *pFileR = fopen("D:\\works\\c_basic\\src\\C_Fileio\\data\\FileWriterfWrite.txt", "r");
	fread(dataR, sizeof(dataR), 1, pFileR);
	printf("%s\n", dataR);
	fclose(pFileR);
}






