#include <stdio.h>

// 실수형 최대값, 최소값 해더 
#include <float.h>
void main() {

    float floatMax = FLT_MAX;   // 실수형 최대값
    float floatMix = FLT_MIN;   // 실수형 최소값

    printf("실수형 float :: 최대값 %e \n", floatMax );
    printf("실수형 float :: OverFlow : %e \n",  floatMax*1000.0f);
    printf("실수형 float :: 최소값 %e    \n", floatMix);
    printf("실수형 float :: UnderFlow : %e  \n", floatMix/100000000.0f);

    double doubleMax = DBL_MAX;
    double doubleMin = DBL_MIN;

    printf("실수형 double :: 최대값 %e \n", doubleMax);
    printf("실수형 double :: 최소값 %f , \n", doubleMin);

}