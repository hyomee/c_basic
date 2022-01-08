#include <stdio.h>
void main() {
    int num1 = 0;
    int size = sizeof num1;
    printf("num1의 크기 %d\n", size);

    // 각 자료형의 크기를 구한다
    printf("char : %d, short : %d, int : %d, long : %d",
        sizeof(char),
        sizeof(short),
        sizeof(int),
        sizeof(long)
    );
}