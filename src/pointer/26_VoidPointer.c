#include <stdio.h>

int funGetData(void *ptr, char type);

void main() {
    int num = 1234567890;
    printf("%d\n", funGetData(&num, 'c'));
    printf("%d\n", funGetData(&num, 's'));    
    printf("%d\n", funGetData(&num, 'i'));
}

int funGetData(void *ptr, char type) {
    int data = 0;

    if (type == 'c')  data = *(char *) ptr;
    else if (type == 's') data = *(short *) ptr;
    else data = *(int *) ptr;

    return data;
}
