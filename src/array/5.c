#include <stdio.h>

void main() {
    int index ;
    int englishScore[5];
    int englishScoreLegnth = sizeof(englishScore)/sizeof(int);
    englishScore[1] = 10;
    englishScore[4] = 200;
    printf("크기  : %d , 길이 : %d\n", sizeof(englishScore), englishScoreLegnth );
    

    for ( index = 0; index < englishScoreLegnth ; index++) {
        printf("영어 점수 : %d index : %d\n", index, englishScore[index]);
    }
    printf("영어 점수 : %d index : %d\n", 5, englishScore[5]);
 
    englishScore[5] = 500;
    printf("크기  : %d , 길이 : %d\n", sizeof(englishScore), sizeof(englishScore)/sizeof(int));
    printf("영어 점수 : %d index : %d\n", 5, englishScore[5]);
}