/**
 * @file 1021.c
 * @author your name (you@domain.com)
 * @brief 단어 1개 입력받아 그대로 출력하기
    1개의 단어를 입력받아 그대로 출력
    입력 : 한 단어가 입력된다.(단, 단어의 길이는 50자 이하이다.)
    출력 : 입력된 단어를 그대로 출력
    -> 주의 사항: char 선언, 입출력 시 자료형
 * @version 0.1
 * @date 2022-01-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main() {
	char word[51];
	scanf("%s", &word);
	printf("%s", word);
	return 0;
}