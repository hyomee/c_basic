#include <stdio.h>
void main() {
    int num[2] = {0x12345678, 0x87654321};

    printf("0x%X\n", num[1]);
    printf("0x%X\n", *(num+1));
    printf("num[2]에 첫번째 Byte룰 0x11로 변경\n");

    *(char *)(num+1) = 0x11;

    printf("num[1]   :: 0x%X\n", num[1]);
    printf("*(num+1) :: 0x%X\n", *(num+1));

}
