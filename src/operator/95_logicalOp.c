#include <stdio.h>

void main() {
    int numa = 10, numb = 1;

    printf(" 0 && 1 : %d \n", 0 && 1);
    printf(" 3 && -1 : %d \n", 3 && -1);

    printf(" numa == 3 && numb == 5: %d \n", numa == 3 && numb == 5);
    printf(" numa == 3 || numb == 5 : %d \n", numa == 3 || numb == 5);

    printf(" numa && numa : %d \n", numa && numa);
    printf(" ! (numa && numa) : %d \n", ! (numa && numa));

    return 0;
}