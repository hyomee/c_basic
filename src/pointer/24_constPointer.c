#include <stdio.h>

void funcNoChangeConstPointer();
void funcNoChangePointerValue();
void funcNoChangeAll();

void main(){
    funcNoChangeConstPointer();
    funcNoChangePointerValue();
}

void funcNoChangeConstPointer(){
    int num01 = 10, num02 = 5;
    int *const ptr = &num01;
    ptr = &num02;
}

void funcNoChangePointerValue(){
    int num01 = 10;
    const int *ptr = &num01;
    *ptr = 30;
}

void funcNoChangeAll() {
    int num01 = 10, num02 = 5;
    const int *const ptr = &num01;
    *ptr = 30;    
    ptr = &num02;
}
