#include <stdio.h>

int getSetfun (int *param);

void main() {
    int num01, num02, *ptrNum02;
    ptrNum02 = &num02;
    num02 = 0;

    num01 = getSetfun(ptrNum02);
    printf("num01  : %d\n", num01);
    printf("num02  : %d",   num02);
}

int getSetfun(int *param){
    int num = 1;
    *param += 2;
    return num;
}