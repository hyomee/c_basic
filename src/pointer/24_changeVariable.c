#include <stdio.h>

void funcDirectSwapMain();
int* funcDirectSwap(int a, int b);
void funcInDirectSwapMain();
void funcInDirectSwap(int *a, int *b); 

void main() {
    funcDirectSwapMain();
    funcInDirectSwapMain();
}

void funcDirectSwapMain() {
    int a = 2;
    int b = 10;
    printf("DirectSwap=========\n");
    printf("before a = %d , b = %d\n", a, b);
    int *numChg = funcDirectSwap( a,  b);
    a = numChg[0];
    b = numChg[1];
    printf("after a = %d , b = %d\n", a, b);
}

int* funcDirectSwap(int a, int b) {    
    static int result[2] ;
    int temp = b;
    b = a;
    a = temp;
    result[0] = a;
    result[1] = b;
    return result;
}

void funcInDirectSwapMain() {
    int a = 2;
    int b = 10;
    printf("InDirectSwap=========\n");
    printf("before a = %d , b = %d\n", a, b);
    funcInDirectSwap(&a,  &b);
    printf("after a = %d , b = %d\n", a, b);
}

void funcInDirectSwap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
