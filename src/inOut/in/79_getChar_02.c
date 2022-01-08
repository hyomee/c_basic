#include <stdio.h>

int main() {
  int ch = getchar();
  printf("문자 1 : %c \n", ch);
  ch = getchar(); // 연속으로 사용 할 경우 enter key 
  ch = getchar(); // 한번더 입력 받음
  printf("문자 2 : %c \n", ch);
  return 0;
}
