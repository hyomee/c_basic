#include <stdio.h>

void main() {
    unsigned char data01 = 1;    // 0x01
    unsigned char data02 = 4;    // 0x04
    unsigned char data03 = 128;  // 0x80;

    unsigned char data01Result = data01 << 2;
    printf("십진수 : %d, data01 << 2 : %d \n", data01, data01Result);
    
    unsigned char data02Result = data02 << 2;
    printf("십진수 : %d, data02 >> 2 : %d \n", data02, data02Result);

    unsigned char data03Result = data03 >> 2;
    printf("십진수 : %d, data03 >> 2 : %d \n", data03, data03Result);
   
}