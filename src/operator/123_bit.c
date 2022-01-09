#include <stdio.h>

void main() {
    unsigned char deviceValue ; 

    printf("16 진수 문자를 입력 하세요 : ");
    scanf("%x", &deviceValue) ;   
    printf("\n입력 값 : %#x \n", deviceValue);
    if (deviceValue & 1) {
        printf ( " 1 번 장비 on , %#x\n", deviceValue & 1);
    };

    if (deviceValue & 2) {
        printf ( " 2 번 장비 on , %d\n", deviceValue & 2);
    };

    if (deviceValue  & 4) {
        printf ( " 3 번 장비 on , %d\n", deviceValue & 4);
    };

    if (deviceValue  & 8) {
        printf ( " 4 번 장비 on , %d\n", deviceValue & 8);
    };

    if (deviceValue  & 0x10) {
        printf ( " 5 번 장비 on , %d\n", deviceValue & 0x10);
    };

    if (deviceValue  & 0x20) {
        printf ( " 6 번 장비 on , %d\n", deviceValue & 0x20);
    };

    if (deviceValue  & 0x40) {
        printf ( " 7 번 장비 on , %d\n", deviceValue & 0x40);
    };

    if (deviceValue  & 0x80) {
        printf ( " 8 번 장비 on , %d\n", deviceValue & 0x80);
    };



}
