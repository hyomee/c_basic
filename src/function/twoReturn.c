#include <stdio.h>

int sum(int value1, int value2){
   int result = value1 + value2;
   return result;
   result = 10;   	// 실행되지 않음
   return result;	// 실행되지 않음
} 

void main() {
   int result = sum(1, 2);
   printf("sum :  %d", result); 

}


