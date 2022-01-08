#include <stdio.h>

int sum(value1,  value2);  /* 함수 원형 */ 
 
void main() { 
    int result = sum(1, 2);
    printf("sum  :  %d", result); 	
}

int sum(int value1, int value2){
    int result = value1 + value2;
    return result;
}
