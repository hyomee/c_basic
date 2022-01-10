#include <stdio.h>

extern void funSum(int a, int b);
extern int result;

int main() {
    funSum(1, 1);
    printf("결과  : %d", result);
    return 0;
}