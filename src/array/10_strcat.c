#include <stdio.h>
#include <string.h>

void main() { 
    char source[6] = "Hello";
    char target[11] = "World";
    strcat(target, source);       
    printf("source : %s \nsourceSize : %d\n", source, sizeof(source));
    printf("target : %s \ntargetSize : %d \ntargetLength : %d\n", target, sizeof(target), strlen(target)); 
}