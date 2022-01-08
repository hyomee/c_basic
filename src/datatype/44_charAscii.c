#include <stdio.h>

/*
 * ASCII CODE를 이용 해서 문자 출력
 */
void main() {
    char h = 0x48;
    char e = 0x65;
    char l = 0x6C;
    char o = 0x46F;
    char w = 0x77;

    printf("%c%c%c%c%c%c\n", h, e, l, l, o, w);
    printf("문자 : %c,  십진수 : %d, 16진수  0x%x \n", h, h, h);
    printf("문자 : %c,  십진수 : %d, 16진수  0x%x \n", 'A', 'A', 'A');    
    printf("문자 : %c,  십진수 : %d, 16진수  0x%x \n", 'a', 'a', 'a');
}