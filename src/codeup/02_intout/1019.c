/**
 * @file 1019.c
 * @author your name (you@domain.com)
 * @brief 연월일 입력받아 그대로 출력하기
    년, 월, 일을 입력받아 지정된 형식으로 출력
    입력 : 연, 월, 일이 ".(닷)"으로 구분되어 입력
    출력 : 입력받은 연, 월, 일을 yyyy.mm.dd 형식으로 출력
    -> 주의 사항: 지정 칸 수
 * @version 0.1
 * @date 2022-01-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main() {
	int y,m,d;
	scanf("%d.%d.%d", &y, &m, &d);
	printf("%04d.%02d.%02d", y, m, d);
	return 0;
}