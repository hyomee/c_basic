/**
 * @file 1004.c
 * @author your name (you@domain.com)
 * @brief 문자 2개 입력받아 순서 바꿔 출력하기
    2개의 문자(ASCII CODE)를 입력받아서 순서를 바꿔 출력
    -> 주의 사항: 출력 시 변수 호출 순서
 * @version 0.1
 * @date 2022-01-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main() {
    char a, b;
    scanf("%c %c", &a, &b);
    printf("%c %c", b, a);
    return 0;
}