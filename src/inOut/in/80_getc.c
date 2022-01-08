#include <stdio.h>
int main() {
  int c;

  c = getc(stdin);

  printf("입력한 문자 : %c", c);
  return 0;
}
