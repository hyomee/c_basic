/**
 * @file 1072.c
 * @author your name (you@domain.com)
 * @brief 정수 입력받아 계속 출력하기
   n개의 정수가 순서대로 입력된다.
    -2147483648 ~ +2147483647, 단 n의 최대 개수는 알 수 없다.
    n개의 입력된 정수를 순서대로 출력해보자.
    while( ), for( ), do~while( ) 등의 반복문을 사용할 수 없다
   입력 : 첫 줄에 정수의 개수 n이 입력되고,
         두 번째 줄에 n개의 정수가 공백을 두고 입력된다.
         -2147483648 ~ +2147483647, 단 n의 최대 개수는 알 수 없다.
   출력 : n개의 정수를 한 개씩 줄을 바꿔 출력한다.
 * @version 0.1
 * @date 2022-01-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main() {
    int num1, num2; 
    scanf("%d", &num1);
    print_num:
        scanf("%d", &num2);
        printf("%d\n", num2);
        num1 -= 1;
        if(num1 > 0) goto print_num;
        
    return 0;
}