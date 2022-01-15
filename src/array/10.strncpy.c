#include <stdio.h>
#include <string.h>

void main() { 
    char source[12] = "Hello World";
    char target[12] = "xxxxx World";
    strncpy(target, source, 5);  // source 앞 5 문자를 target에 복사
    printf("source : %s \ntarget : %s\n", source, target);
}