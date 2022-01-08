#include <stdio.h>
int main() {
    char str[10];
    char ch;
    int dec, hex, oct;
    float db;
    printf("문자열, 문자, 십진수, 16 진수, 8 진수, 소수를 각각 입력하세요\n");
    scanf("%9s %*s %c %d %x %o %f", str, &ch, &dec, &hex, &oct, &db);
    printf("문자열 : %s \n", str);
    printf("문자 : %c \n", ch);
    printf("십진수 : %d \n", dec);
    printf("16 진수 : %x \n", hex);
    printf("8 진수 : %o \n", oct);
    printf("소수 : %f \n", db);
    return 0;
}
