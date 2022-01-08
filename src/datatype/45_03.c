#include <stdio.h>

// 자료형의 최댓값과 최소값을 정의한 해더 파일
#include <limits.h> 
// 부호 있는 정수형 최대, 최소값
void main() {
    char charMax = CHAR_MAX;    
    char charMin = CHAR_MIN;     
    printf("char 최대값 : %d, 최소값 : %d\n", charMax, charMin);

    short shortMax = SHRT_MAX;
    short shortMin = SHRT_MIN;
    printf("short 최대값 : %d, 최소값 : %d\n", shortMax, shortMin);

    int intMax = INT_MAX;
    int intMin = INT_MIN;
    printf("int 최대값 : %d, 최소값 : %d\n", intMax, intMin);

    long longMax = LONG_MAX;
    long longMin = LONG_MIN;
    printf("long 최대값 : %d, 최소값 : %d\n", longMax, longMin);

    long long longLongMax = LLONG_MAX;
    long long longLongMix = LLONG_MIN;
    printf("long long  최대값 : %d, 최소값 : %d\n", longLongMax, longLongMix);

}