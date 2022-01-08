#include <stdio.h>
void main() {
    char ch01 = 'A';   				        // A의 ASCII 값 65를 변수 저장  
    char ch02 = 'A' + 1;				    // A의 ASCII 값 65 + 1 = 66을  변수 저장
    printf("%c %d\n" , ch01, ch01); 		// A 65
    printf("%c %d\n" , ch02, ch02);			// B 66

    char ch1[] = "대한민국";   			    // 한글 2byte로 null문자 포함 크기는 9 
    char ch2[] = "Hello";			        // 영문자 1byte로 null문자 포함 크기는 6 
    char ch3[] = "1" ;			            // 숫자를 문자로 취급 하여 1byte 로 null문자 포함 크기는 2 
    char ch4   = '1' ;			            // 단일문자 1byte 로 크기는 1 
    char ch5   = "1" ;
    printf("%s , %d , %d\n" , ch1, ch1, sizeof(ch1)); 	// 대한민국 , 6487568 , 9 
    printf("%s , %d , %d\n" , ch2, ch2, sizeof(ch2)); 	// Hello , 6487552 , 6
    printf("%s , %d , %d\n" , ch3, ch3, sizeof(ch3)); 	// 1 , 6487536 , 2
    printf("%c , %d , %d\n" , ch4, ch4, sizeof(ch4)); 	// 1 , 49 , 1
    printf("%s , %d , %d\n" , ch5, ch5, sizeof(ch5));	// (null) , 0 , 1

}