#include <stdio.h>

void main() { 
    char score[12] = {80, 90, 100, 70,50,40, 90, 80, 100, 60, 80, 80};
    int index, x, y;

    for ( index = 0;  index < 12 ; index ++) {
        x = index / 3 ;
        
        
        if (x == 0) {
            printf("C : %d \n", score[index]);
        } else if (x == 1) {
            printf("C++ : %d \n", score[index]);
        } else if (x == 2) {
            printf("JAVA : %d \n", score[index]);
        }
    }

    for ( index = 0;  index < 12 ; index ++) {        
        y = index / 4 ;
        if (y == 0) {
            printf("�ձ浿 : %d \n", score[index]);
        } else if (y == 1) {
            printf("�ٵ��� :  %d \n", score[index]);
        } else if (y == 2) {
            printf("�迵�� :  %d \n", score[index]);
        } else if (y == 3) {
            printf("������ : %d \n", score[index]);
        }
    }

}
