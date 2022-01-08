#include <stdio.h>
#include <limits.h>
int main()
{
    int intMax = INT_MAX;   // 2147483647, 
    int intMin = INT_MIN;   // -2147483648

    int intMaxOverFlow = intMax + 1;     // 2147483648  
    int intMinUnderFlow = intMin - 1;    // -2147483649
	
    printf("문자형 정수 :: 최대값 %d ,  OverFlow : %d \n", intMax, intMaxOverFlow);
    printf("문자형 정수 :: 최소값 %d ,  OverFlow : %d  \n", intMin, intMinUnderFlow);
      

    unsigned int uIntMax = UINT_MAX;    // -1
    unsigned int uIntMin = 0;           // 0

    unsigned int uIntMaxOverFlow = UINT_MAX + 1; // 부호 없는 정수형 범위 밖 256 할당 overFlow  
    unsigned int uIntMinUndeFlow = uIntMin -1;   // 부호 없는 정수형 범위 밖 -1 할당  underFlow  
    
    printf("부호 없는 문자형 정수 :: 최대값 %d ,  OverFlow : %d \n", uIntMax, uIntMaxOverFlow);
    printf("부호 없는 문자형 정수 :: 최소값 %d ,  OverFlow : %d  \n", uIntMin, uIntMinUndeFlow);
	
    return 0;
}
