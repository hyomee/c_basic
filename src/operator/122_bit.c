#include <stdio.h>
void main() {
    unsigned char a = 0x42; 
    unsigned char b = 0x42; 
    unsigned char c = 0x42;
    unsigned char d = 0x42; 
    unsigned char e = 0x42; 

    a &= 5;
    b |= 5;
    c ^= 5;
    d <<= 5;
    e >>= 5;

    printf("AND (a &= 5)  = a : %d \t(%#x) \n", a, a);
    printf("OR (b |= 5)  = b : %d\t(%#x) \n", b, a);
    printf("XOR (c ^= 5)  = c : %d\t(%#x) \n", c, c);
    printf("<< (d <<= 5) = d : %d\t(%#x) \n", d, d);  
    printf(">> (e >>= 5) = e : %d \t(%#x) \n", e, e);  
}
