#include <stdio.h>

void main() {
    int index ;
    int englishScore[5];
    int englishScoreLegnth = sizeof(englishScore)/sizeof(int);
    englishScore[1] = 10;
    englishScore[4] = 200;
    printf("ũ��  : %d , ���� : %d\n", sizeof(englishScore), englishScoreLegnth );
    

    for ( index = 0; index < englishScoreLegnth ; index++) {
        printf("���� ���� : %d index : %d\n", index, englishScore[index]);
    }
    printf("���� ���� : %d index : %d\n", 5, englishScore[5]);
 
    englishScore[5] = 500;
    printf("ũ��  : %d , ���� : %d\n", sizeof(englishScore), sizeof(englishScore)/sizeof(int));
    printf("���� ���� : %d index : %d\n", 5, englishScore[5]);
}