#include <stdio.h>

void main() {
    int data1, data2;
    data1 = 2;
    data2 = 3;

    int result1 = data1 + data2;
    int result2 = data1 - data2;
    int result3 = data1 * data2;
    int result4 = data1 / data2;    // 2�� 3���� ���� : ���� result4 �� ���� 
    int result5 = data1 % data2;    // 2�� 3���� ���� : ������
    printf("result1 : %d, result2 : %d, result3 : %d, result4 : %d, result5 : %d\n", 
            result1, result2, result3, result4, result5);

}