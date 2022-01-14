/**
 * @file 1073.c
 * @author your name (you@domain.com)
 * @brief 0 입력될 때까지 무한 출력하기2
  정수가 순서대로 입력된다. -2147483648 ~ +2147483647, 단 개수는 알 수 없다.
    0이 아니면 입력된 정수를 출력하고, 0이 입력되면 출력을 중단해보자.
  입력 : 정수가 순서대로 입력된다.  -2147483648 ~ +2147483647, 단 개수는 알 수 없다.
  출력 : 입력된 정수를 줄을 바꿔 하나씩 출력하는데, 0이 입력되면 종료한다. (0은 출력하지 않는다.)
 * @version 0.1
 * @date 2022-01-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main() {
	int num;
	while (1) {
	    scanf("%d", &num);
	    if (num == 0) 
	        break;
	    printf("%d\n", num);
	}
	return 0;
}