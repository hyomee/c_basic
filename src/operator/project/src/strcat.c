#include <stdio.h>

void main() { 
    char score[4][3] = {{1, 2, 3}, {4,5,6}, {7, 8, 9}, {10, 11, 12}};
    char stud[4] ;
    char scoreSum[3] = { 0,0,0};   
    char scoreSumName[3][10] = { "C", "C++", "JAVA"};     
    char studName[4][30] = {"ȫ�浿", "�ٵ���", "�迵��" ,"������"};
    int x, y;
   

    for ( y = 0;  y < 4 ; y ++) {
        int sum = 0;
        for ( x = 0;  x < 3 ; x ++ ) {
            sum += score[y][x];
            scoreSum[x] += score[y][x];
        } 
        stud[y] = sum;
        
    }

   
    for ( x = 0;  x < 3 ; x ++) {
       printf("%s : %d \n", scoreSumName[x], scoreSum[x]);
    }
    for ( y = 0;  y < 4 ; y ++) {
       printf("%s : %d \n", studName[y], stud[y]);
    }
    

}
