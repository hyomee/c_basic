#include <stdio.h>
#include <limits.h>
int main()
{
    char charMax = CHAR_MAX;    // 127
    char charMin = CHAR_MIN;   // -128

    char charMaxOverFlow = charMax + 1;     // 부호 있는 정수형 범위 밖 128 할당 overFlow 
    char charMinUnderFlow = charMin - 1;    // 부호 있는 정수형 범위 밖 -129 할당 underFlow 
	
    printf("문자형 정수 :: 최대값 %d ,  OverFlow : %d \n", charMax, charMaxOverFlow);
    printf("문자형 정수 :: 최소값 %d ,  OverFlow : %d  \n", charMin, charMinUnderFlow);
      

    unsigned char uCharMax = UCHAR_MAX;     // 255
    unsigned char uCharMin = 0;

    unsigned char uCharMaxOverFlow = UCHAR_MAX + 1; // 부호 없는 정수형 범위 밖 256 할당 overFlow  
    unsigned char uCharMinUndeFlow = uCharMin -1;   // 부호 없는 정수형 범위 밖 -1 할당  underFlow  
    
    printf("부호 없는 문자형 정수 :: 최대값 %d ,  OverFlow : %d \n", uCharMax, uCharMaxOverFlow);
    printf("부호 없는 문자형 정수 :: 최소값 %d ,  OverFlow : %d  \n", uCharMin, uCharMinUndeFlow);
	
    return 0;
}
