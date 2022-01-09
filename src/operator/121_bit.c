#include <stdio.h>

void main() {
    unsigned char a = 0x23;     
    unsigned char b = 0x42;    
    unsigned char c = a & b;
    unsigned char d = a | b;    
    unsigned char e = a ^ b;   
    unsigned char f = ~a;

    printf("a (%#x): %d, b (%#x) : %d  \n", a, a, b, b);
    printf("AND(a & b)  =  c : %d (%#x) \n", c,c);
    printf("OR(a & b)   =  c : %d (%#x) \n", d,d);
    printf("XOR(a & b)  =  c : %d (%#x) \n", e,e);
    printf("NOT(~a)     =  c : %d (%#x) \n", f,f);   
}