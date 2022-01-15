#include <stdio.h>

void main() { 
    char score[4][3] = {{1, 2, 3}, {4,5,6}, {7, 8, 9}, {10, 11, 12}};
    char stud[4] ;
    char studName[4] = {'A', 'B', 'C' ,'D'};
    int x, y;
    int cSum = 0, cplusSum = 0, javaSum =0 ;


    // 언어별 
    for ( y = 0;  y < 4 ; y ++) {
        int sum = 0;
        for ( x = 0;  x < 3 ; x ++ ) {
            sum += score[y][x];
            if (x == 0) {
                cSum += score[y][x];
            } else if (x == 1) {                
                cplusSum += score[y][x];
            } else if (x == 2) {
                javaSum += score[y][x];
                 
            } 
        } 
        stud[y] = sum;
        
    }

    
    printf("C : %d \n", cSum);
    printf("C++ : %d \n", cplusSum);
    printf("JAVA : %d \n", javaSum);
    for ( y = 0;  y < 4 ; y ++) {
       printf("%c : %d \n", studName[y], stud[y]);
    }
    

}