#include <stdio.h>
#include <stdlib.h>

void main()
{
    char chHex[] = "6c";
    unsigned int nResult = 0;
    
    nResult = strtol(chHex, NULL, 16);  // 16진수 문자열을 long 형
 
    printf ( "%s => %d\n", chHex, nResult );
}
