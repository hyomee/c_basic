/**
 * @file 1022.c
 * @author your name (you@domain.com)
 * @brief 문장 1개 입력받아 그대로 출력하기
    공백 문자가 포함되어 있는 문장을 입력받고 그대로 출력
    입력 : 공백이 포함되어 있는 한 문장이 입력된다.
           단, 입력되는 문장은 여러 개의 단어로 구성되고, 엔터로 끝나며,
           최대 길이는 2000 문자를 넘지 않는다.
    출력 : 입력된 문장을 그대로 출력
    -> 주의 사항: char 선언, 공백 입력
 * @version 0.1
 * @date 2022-01-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main() {
	char data[2001];
    fgets(data, 2000, stdin);
    printf("%s", data);
	return 0;
}

/**
 int main() {
	char data[2001];
   	scanf("%[^\n]", data);
   	printf("%s", data);
	return 0;
   } 
 */
