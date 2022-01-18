#include <stdio.h>
void main() {
    int i;
    int num =   0x12345678;
    char *ptr = (char *)&num;
    for ( i = 0; i < 4; i++) {
        printf("0x%X ", *ptr);
        ptr++;
    }
}