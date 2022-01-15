#include <stdio.h>
#include <string.h>

void main() { 

    char source[] = "Hello";
    char target[] = "World";
    
    printf("target : %s \ntargetSize : %d\n", target, sizeof(target));

    strcat(source, target);   
    
    printf("source : %d \nsourceSize : %d\n", source, sizeof(source));
    printf("target : %s \ntargetSize : %s\n", target, sizeof(target)); 
}
