#include <stdio.h>

/**
 * @brief 임의의 숫자 5개를 입력 받아서 합 구하기 
 * 
 */
void main() {
    int index , sum = 0, num;
    char count[9] = {1,2,3,4,5,6,7,8,9};
    char result[9];
    printf("몇단을 출력 할까요 ? : ");
    scanf("%d", &num);
    printf("%d딘============ \n", num );
    int length = sizeof(count)/sizeof(char);

    for ( index = 0; index < length ; index++) {
        result[index] = num * count[index];
        printf("%d * %d = %d \n", num, count[index], result[index]);
    }

    for ( index = 0; index < length ; index++) {
        sum = sum + result[index];
    }
    printf("%d단의 전체 합 :  %d \n", num, sum);    
}