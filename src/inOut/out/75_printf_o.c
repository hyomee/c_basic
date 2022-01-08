#include <stdio.h>
void main() {
    int num = 10;
    int octal = 010;
    int hexa = 0x10;
    printf("num => 10진수 num : %d, 8진수 변환 : %o,  16진수 변환 : %X \n", num, num, num);
    printf("octal => 10진수 num : %d, 8진수 변환 : %o, 16진수 변환 : %X \n", octal, octal, octal);
    printf("hexa  => 10진수 num : %d, 8진수 변환 : %o, 16진수 변환 : %X \n", hexa, hexa, hexa);
}
