/**
 * @file 1007.c
 * @author your name (you@domain.com)
 * @brief 정수 1개 입력받아 3번 출력하기
    int형 정수 1개를 입력받아 공백을 사이에 두고 3번 출력
    -> 주의 사항: 출력 시 사이 공백
 * @version 0.1
 * @date 2022-01-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("%d %d %d", a,a,a);
    return 0;
}