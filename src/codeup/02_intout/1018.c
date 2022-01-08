/**
 * @file 1018.c
 * @author your name (you@domain.com)
 * @brief 시간 입력받아 그대로 출력하기
    어떤 형식에 맞추어 시간이 입력될 때, 그대로 출력
    시간 형식 입출력 [콜론(:)]
    -> 주의 사항: 입출력 형식 통일
 * @version 0.1
 * @date 2022-01-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d:%d", &a, &b);
    printf("%d:%d", a, b);
    return 0;
}