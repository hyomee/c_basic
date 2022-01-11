#include <stdio.h>

extern void funSum(int a, int b);
extern void fun_Printf();
extern int result;
void funSumAdd();

/* int g_num01 = 0; // func.c 오류 */ 
int g_num02 = 1;
/*  extren int g_num03  // func.c staic으로 선언됨 오류*/  

int main() {
    funSum(1, 1);
    printf("결과  : %d\n", result);    
    printf("main => g_num02  : %d\n", g_num02);
    fun_Printf();
    funSumAdd();
    funSumAdd();
    return 0;
}

void funSumAdd() {
	static int data = 0;
	printf("main => data  : %d\n", data++);
}
