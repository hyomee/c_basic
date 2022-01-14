#include <stdio.h>
#include <math.h>   // fmod 함수가 선언된 헤더 파일
int main()
{
    // 실수의 나머지 연산은 fmod, fmodf, fmodl 함수를 사용
    double num1 = 5.523;
    double num2 = 1.25;
    printf("%f\n", fmod(num1, num2));   // 0.523000
    float num3 = 5.523f;
    float num4 = 2.25f;
    printf("%f\n", fmodf(num3, num4));  // 1.023000
    return 0;
}
