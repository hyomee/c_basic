#include <stdio.h>

int getStringLength(char data[]) {
    int count = 0;
    while(data[count]) {
        count++;
    }
    return count;
}

void main() {
    int index ;
    char string[] = "Hello";
    int stringLength = getStringLength(string);

    for ( index = 0; index <= stringLength; index++ ){
        printf("%c", string[index]);
    }
}