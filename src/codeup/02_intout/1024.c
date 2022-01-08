/**
 * @file 1024.c
 * @author your name (you@domain.com)
 * @brief 단어 1개 입력받아 나누어 출력하기
    단어를 1개 입력받는다.
    입력받은 단어(영어)의 각 문자를 한줄에 한 문자씩 분리해 출력
    입력 : 단어(영어) 하나를 입력받는다. (단, 단어의 길이는 20자 이하이다.)
    출력 : 단어의 문자(영어)를 하나씩 나누어 한 줄에 한 개씩 ' '로 묶어서 출력한다.
    -> 주의 사항: char 배열, 반복문
 * @version 0.1
 * @date 2022-01-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main() {
    char word[21];
	scanf("%s", &word);
	for (int i=0; word[i] != '\0'; i++) {
	    printf("\'%c\'\n", word[i]);
	}
	return 0;
}