#include <stdio.h>


void convertDecimalToBinary(inNum, ptrBinary, ptrPosition);
int* setDecimalToBinary(inNum, ptrPosition);

int main() {
    unsigned int inNum ;
    int i;
    int position = 0;
    printf("input decimal > ");
    scanf("%d", &inNum);

    int *ptrPosition = &position;
    int *nums = setDecimalToBinary(inNum, ptrPosition);
    for ( i = 0; i <= position; i++) {
        printf("%d", nums[i]);
    } 

    return 0;
}

int*  setDecimalToBinary(unsigned int inNum, int *ptrPosition) {
    static int binary[20] = { 0, };    
    int i ;
    convertDecimalToBinary( inNum, binary, ptrPosition);   
    return binary;
}

void convertDecimalToBinary(unsigned int inNum, int  *ptrBinary, int *ptrPosition) {
    if (inNum < 2) {  
        ptrBinary[*ptrPosition] =  inNum;
    } else {             
        convertDecimalToBinary(inNum / 2, ptrBinary, ptrPosition);
        *ptrPosition +=  1;   
        ptrBinary[*ptrPosition] = inNum % 2;       
    } 
}
