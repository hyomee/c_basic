#include <stdio.h>
void main() {
    char c1 = 'a';    				        // 문자 변수를 선언하고 문자 a를 저장
    char c2 = 'b';    				        // 문자 변수를 선언하고 문자 b를 저장
    char c3[] = "hello 안녕"; 			    // 문자 배열 변수 선언 하고 문자 hello 안녕 저장 "  
 
    // char를 %c로 출력하면 문자가 출력되고, 
    // %d로 출력하면 정수값이 출력됨
    printf("변수 c1 => %c, 숫자(%%d) : %d\n", c1, c1);    			// a, 97: a의 ASCII 코드값은 97
    printf("변수 c2 => %c, 숫자(%%d) : %d\n", c2, c2);    			// b, 98: b의 ASCII 코드값은 98
    printf("변수 c3 => %s, 숫자(%%d) : %d\n", c3, c3);    			// hello 안녕, ASCII 코드값은  6487568
    
    printf("%c %d\n", 'a' + 1, 'a' + 1);    // b 98: a는 ASCII 코드값 97이고,  97에 1을 더하여 98이 되었으므로 b가 출력됨
    printf("%c %d\n", 97 + 1, 97 + 1);      // b 98: ASCII 코드값 97에 1을 더하여 98이 되었으므로 b가 출력됨
}