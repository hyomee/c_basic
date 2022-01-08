#include <stdio.h>

// 자료형의 최댓값과 최소값을 정의한 해더 파일
#include <limits.h> 
// 부호 있는 정수형 최대, 최소값
void main() {
    unsigned char uCharMax = UCHAR_MAX;
    unsigned char uCharMin = 0;
    printf("unsigned char 최대값 : %d, 최소값 : %d\n", uCharMax, uCharMin);

    unsigned short uShortMax = USHRT_MAX;
    unsigned short uShortMin = 0;
    printf("unsigned short 최대값 : %d, 최소값 : %d\n", uShortMax, uShortMin);

    unsigned int uIntMax = UINT_MAX;
    unsigned int uIntMin = 0;
    printf("unsigned int 최대값 : %d, 최소값 : %d\n", uIntMax, uIntMin);

    unsigned long uLongMax = ULONG_MAX;
    unsigned long uLongMin = 0;
    printf("unsigned long 최대값 : %d, 최소값 : %d\n", uLongMax, uLongMin);

    unsigned long long uLongLongMax = ULLONG_MAX;
    unsigned long long uLongLongMix = 0;
    printf("unsigned long long  최대값 : %d, 최소값 : %d\n", uLongLongMax, uLongLongMix);

}