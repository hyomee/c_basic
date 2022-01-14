#include <stdio.h>
int main() {
    int numa = 4, numb = 7;

    int result1 = numa > numb;
    int result2 = numa < numb;
    int result3 = numa == numb;
    int result4 = numa != numb;

    printf( "numa > numb : %d \n", result1);
    printf( "numa < numb : %d \n", result2);
    printf( "numa == numb : %d \n", result3);
    printf( "numa != numb : %d \n", result4);
    return 0;
}