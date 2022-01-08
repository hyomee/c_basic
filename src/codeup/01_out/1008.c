/**
 * @file 1008.c - [기초-출력]
 * @author your name (you@domain.com)
 * @brief 키보드로 입력할 수 없는 다음 모양을 출력해보자.
    (** 참고 : 운영체제의 문자 시스템에 따라 아래와 같은 모양이 출력되지 않을 수 있다.)
    ┌┬┐
    ├┼┤
    └┴┘
    유니코드 특수문자를 출력하는 방법 : printf("\u250C\u252C\u2510\n");
 * @version 0.1
 * @date 2022-01-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main() {
    printf("\u250C\u252C\u2510\n");
    printf("\u251C\u253C\u2524\n");
    printf("\u2514\u2534\u2518");
    return 0;
}