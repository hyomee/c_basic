/**
 * @file 1020.c
 * @author your name (you@domain.com)
 * @brief 주민번호 입력받아 형태 바꿔 출력하기
    주민번호는 다음과 같이 구성된다.
    XXXXXX-XXXXXXX
    앞의 6자리는 생년월일(yymmdd)이고 뒤 7자리는 성별, 지역, 오류검출코드이다. 
    주민번호를 입력받아 형태를 바꿔 출력
    입력 : 주민번호 앞 6자리와 뒷 7자리가 '-'로 구분되어 입력된다.
            (입력값은 가상의 주민번호이다.) ex)110011-0000000
    출력 : '-'를 제외한 주민번호 13자리를 모두 붙여 출력
    -> 주의 사항: 입력 시 '-' 구분, 출력 시 자릿수
 * @version 0.1
 * @date 2022-01-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main() {
	int number1, number2;
	scanf("%d-%d", &number1, &number2);
	printf("%06d%07d", number1, number2);
	return 0;
}