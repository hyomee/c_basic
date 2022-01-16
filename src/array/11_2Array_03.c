#include <stdio.h>

void main() { 
    char score[4][3] = {{80, 90, 100}, {70,50,40}, {90,80,100}, {60,80,80}};
    int stud[4] ;
    int scoreSum[3] = { 0,0,0};   
    char scoreSumName[3][10] = { "C", "C++", "JAVA"};     
    char studName[4][30] = {"»´±Êµø", "πŸµœ¿Ã", "±Ëøµ¿Ã" ,"¡§¡§¿Ã"};
    int c, r;
    
    for ( r = 0;  r < 4 ; r ++) {
        int sum = 0;
        for ( c = 0;  c < 3 ; c ++ ) {
            sum += score[r][c];  
            scoreSum[c] += score[r][c];  
        } 
        stud[r] = sum;
        
    }

   
    for ( c = 0;  c < 3 ; c ++) {
       printf("%s : %d \n", scoreSumName[c], scoreSum[c]);
    }
    for ( r = 0;  r < 4 ; r ++) {
       printf("%s : %d \n", studName[r], stud[r]);
    }   

}