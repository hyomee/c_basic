#include <stdio.h>

/**
 * @brief ������ ���� 5���� �Է� �޾Ƽ� �� ���ϱ� 
 * 
 */
void main() {
    int index , sum = 0;
    char score[10] ;
    printf("���ڸ� �Է� �ϼ��� : \n");
    scanf("%d", &score[0]);
    scanf("%d", &score[1]);
    scanf("%d", &score[2]);
    scanf("%d", &score[3]);
    scanf("%d", &score[4]);

    int scoreLegnth = sizeof(score)/sizeof(char);

    for ( index = 0; index < scoreLegnth ; index++) {
        sum = sum + score[index];
    }
    printf("sum : %d \n", sum);
}