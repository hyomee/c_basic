#include <stdio.h>

void main() { 
    char score[4][3] = {{80, 90, 100}, {70,50,40}, {90,80,100}, {60,80,80}};
    int stud[4] ;
    char studName[4] = {'A', 'B', 'C' ,'D'};
    int c, r;
    int cSum = 0, cplusSum = 0, javaSum =0 ;


    // 언어별 
    for ( r = 0;  r < 4 ; r ++) {
        int sum = 0;
        for ( c = 0;  c < 3 ; c ++ ) {
            sum += score[r][c];
            if (c == 0) {
                cSum += score[r][c];
            } else if (c == 1) {                
                cplusSum += score[r][c];
            } else if (c == 2) {
                javaSum += score[r][c];
                 
            } 
        } 
        stud[r] = sum;
        
    }

    
    printf("C : %d \n", cSum);
    printf("C++ : %d \n", cplusSum);
    printf("JAVA : %d \n", javaSum);
    for ( r = 0;  r < 4 ; r ++) {
       printf("%c : %d \n", studName[r], stud[r]);
    }
    

}