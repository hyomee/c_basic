#include <stdio.h>

void main() {
    short a;
    short *pa;

    pa = &a;
    a = 100;

    printf("a data     : 0x%X\n", a );
    printf("a address  : %p\n",  &a);
    printf("pa data    : 0x%X\n", pa );    
    printf("pa address : %p\n",  &pa);
    *pa ++;
    printf("pa data    : 0x%X\n", pa );    
    printf("pa address : %p\n",  &pa);
    printf("a data     : 0x%X\n", a );
}