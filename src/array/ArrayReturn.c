#include<stdio.h>
#include <string.h>

int* getNmberArray();
void printNumberArray();

char* getCharArray();
void printCharArray();
void printCharArrayStrcpy();

int i;

void main() {

    printNumberArray();
    printCharArray();
    printCharArrayStrcpy();    

}

void printNumberArray() {
    printf("==== int Array =====\n");
    int* nums = getNmberArray();
    for( i=0; i<6; i++) {
        printf("%d", nums[i]);
    }
}

int* getNmberArray() {
    static int arr[6] = {1,2,3,4,5,6};
    return arr;
}

void printCharArray() {
    printf("\n==== int Char =====\n");
    char* chars = getCharArray();
    for( i=0; i<6; i++) {
        printf("%c", chars[i]);
    }
}

void printCharArrayStrcpy() {
    printf("\n==== int Char 02 =====\n");
    char* charArray = getCharArray();
    strcpy(charArray, getCharArray()); 
    printf("%s",charArray);
}

char* getCharArray() {
    static char chars[6] = {'a', 'b', 'c', 'd'};
    return chars;
}
