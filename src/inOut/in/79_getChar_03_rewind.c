#include <stdio.h>

int main() {
  int ch = getchar();
  rewind(stdin);
  printf("문자 1 : %c \n", ch);
  ch = getchar(); // 한번더 입력 받음
  rewind(stdin);
  printf("문자 2 : %c \n", ch);
  return 0;
}
