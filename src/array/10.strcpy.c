#include <stdio.h>
#include <string.h>

void main() {
 
    char sourceData[] = "Hello";
    int  sourceDataLength = sizeof(sourceData);
    char targetData[sourceDataLength] ;

    strcpy(targetData, sourceData);
    printf("sourceData : %s \ntargetData : %s\n", sourceData, targetData);
}