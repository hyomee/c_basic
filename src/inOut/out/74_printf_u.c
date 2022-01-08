#include <stdio.h>
void main() {
    int num01 = -1;  /* 최대값 */
    unsigned int num02 = 4294967295;
    printf("부호고려 num01 : %d, 부호고려하지않음 num01 : %u \n", num01, num01);
    printf("부호고려 num02 : %d, 부호고려하지않음 num02 : %u \n", num02, num02);
}
