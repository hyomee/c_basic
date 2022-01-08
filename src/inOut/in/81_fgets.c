#include <stdio.h>
int main() {
  char str[100];
  printf("이름은 무엇인가요? ");
  fgets(str,100, stdin);
  printf("%s 님 반갑습니다.\n", str);
  return 0;
}
