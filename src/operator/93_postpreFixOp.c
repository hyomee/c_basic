#include <stdio.h>
int main() {
    int i = 10, numPostfix;
    int j = 10, numPrefix;

    numPostfix = ++i;
    numPrefix = j++;

    printf("PostFix : %d, PreFix : %d\n", numPostfix, numPrefix);
    numPrefix = j++;
    printf("PreFix : %d\n", numPrefix);
    return 0;
}