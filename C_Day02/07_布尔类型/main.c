#include<stdbool.h>
#include<stdio.h>
int main(void) {
	bool flag1, flag2;
	// flag1 = true;
	// flag2 = false;
	flag1 = 5;// 任何非0的数都会转换为1
	flag2 = 0;
	printf("flag1 = %u", flag1);// 1
	printf("flag2 = %u", flag2);// 0
	// 本质还是无符号整数类型 true = 1 false = 0
}