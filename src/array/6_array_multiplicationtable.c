#include <stdio.h>

/**
 * @brief ������ ���� 5���� �Է� �޾Ƽ� �� ���ϱ� 
 * 
 */
void main() {
    int index , sum = 0, num;
    char count[9] = {1,2,3,4,5,6,7,8,9};
    char result[9];
    printf("����� ��� �ұ�� ? : ");
    scanf("%d", &num);
    printf("%d��============ \n", num );
    int length = sizeof(count)/sizeof(char);

    for ( index = 0; index < length ; index++) {
        result[index] = num * count[index];
        printf("%d * %d = %d \n", num, count[index], result[index]);
    }

    for ( index = 0; index < length ; index++) {
        sum = sum + result[index];
    }
    printf("%d���� ��ü �� :  %d \n", num, sum);    
}