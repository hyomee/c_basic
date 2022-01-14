/**
 * @file 1076.c
 * @author your name (you@domain.com)
 * @brief 문자 1개 입력받아 알파벳 출력하기
     영문자(a ~ z) 1개가 입력되었을 때 그 문자까지의 알파벳을 순서대로 출력해보자. 
     입력 : 영문자 1개가 입력된다. (a ~ z)
     출력 : a부터 입력한 문자까지 순서대로 공백을 두고 출력한다.
 * @version 0.1
 * @date 2022-01-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main() {
    char c, temp='a';
    scanf("%c", &c);
    do {
        printf("%c ", temp);
        temp += 1;
    } while (temp <= c);
    
    return 0;
}