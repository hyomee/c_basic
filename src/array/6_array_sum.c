#include <stdio.h>

/**
 * @brief 임의의 숫자 5개를 입력 받아서 합 구하기 
 * 
 */
void main() {
    int index , sum = 0;
    char score[10] ;
    printf("숫자를 입력 하세요 : \n");
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