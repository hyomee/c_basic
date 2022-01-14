#include <stdio.h>

void main() {
    float num1;
    int num2;
    num1 = 5.0f;
    num2 = 3;

    float result1 = num1 / 0.0f;    // 1.#INF00  
    // int result2 = num2 / 0;      // 오류
    float result3 = 0 / num1;       // 0.000000
    int result4 = 0 / num2;         // 0

    printf("%f\n", result1);
    // printf("%fd\n", result2);
    printf("%f\n", result3);
    printf("%d\n", result4);

    // 나머지 연산 
    // float result5 = num1 % 2.0f;  // 오류
    float result5 = num2 % 2;
    int result6 = num2 % 2; 
    printf("result5 : %f\n", result5);
    printf("result6 : %d\n", result6);
}