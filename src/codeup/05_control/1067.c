/**
 * @file 1067.c
 * @author your name (you@domain.com)
 * @brief 정수 1개 입력받아 분석하기
    정수 1개가 입력되었을 때, 음(minus)/양(plus)과 짝(even)/홀(odd)을 출력해보자.
    입력 : 정수 1개가 입력된다. -2147483648 ~ +2147483647, 단 0은 입력되지 않는다.
    출력 : 입력된 정수에 대해 첫 줄에 minus 나 plus 를 출력하고,
           두 번째 줄에 odd 나 even 을 출력한다.
 * @version 0.1
 * @date 2022-01-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    
    if(a > 0) {
    	printf("plus\n");
    }
    else {
    	printf("minus\n");
    }
    
    if(a%2 == 0) {
    	printf("even\n");
    }
    else {
    	printf("odd\n");
    }
    
    return 0;
}