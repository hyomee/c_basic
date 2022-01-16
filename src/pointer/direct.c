#include <stdio.h>

void fun(b);

int main() {
    int a = 3456;
    
    printf("a         : 0x%X\n", a);
    printf("a address : %p\n",  &a);
    fun(a);
    printf("== after fun ==\n");
    printf("a         : 0x%X\n", a);
    printf("a address : %p\n",  &a);
}

void fun(int b) {
    int c;
    c = b;
    printf("--------------\n");
    printf("b         : 0x%X\n", b);
    printf("b address : %p\n",  &b);
    printf("--------------\n");
    printf("c         : 0x%X\n", c);
    printf("c address : %p\n",  &c);
    b += 1;
    printf("== b operator =\n");
    printf("b         : 0x%X\n", b);
    printf("b address : %p\n",  &b);
}