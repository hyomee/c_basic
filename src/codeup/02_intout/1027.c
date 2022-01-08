/**
 * @file 1027.c
 * @author your name (you@domain.com)
 * @brief 년월일 입력 받아 형식 바꿔 출력하기
    년월일을 출력하는 방법은 나라마다, 형식마다 조금씩 다르다.
    년월일(yyyy.mm.dd)를 입력받아, 일월년(dd-mm-yyyy)로 출력
    (단, 한 자리 일/월은 0을 붙여 두자리로, 년도도 0을 붙여 네자리로 출력한다.) 
    입력 : 년월일이 '.'(닷)으로 구분되어 입력
    출력 : 년월일을 일월년으로 바꾸어 '-'(대쉬, 마이너스)로 구분해 출력
 * @version 0.1
 * @date 2022-01-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main() {
	int y, m, d;
	scanf("%d.%d.%d", &y, &m, &d);
	printf("%02d-%02d-%04d", d, m, y);
	return 0;
}