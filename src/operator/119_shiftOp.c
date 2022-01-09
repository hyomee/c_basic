#include <stdio.h>

void main() {
    unsigned char uData = 0x22;
    printf("unsigned shift\n");
    printf("uData        => 십진수 : %d, 16진수 : %#x \n", uData, uData);
    uData = uData <<  2;
    printf("uData <<  2  =>  십진수 : %d, 16진수 : %#x \n", uData, uData);

    printf("\nsigned shift\n");
    char data = 0x22;
    printf("uData        => 십진수 : %d, 16진수 : %#x \n", data, data);
    data = data <<  2;
    printf("uData <<  2  =>  십진수 : %d, 16진수 : %#x \n", data, data);
   
}