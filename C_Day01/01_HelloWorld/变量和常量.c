/*
#include <stdio.h>
const int M = 5;
int main(void) {
#define N 5
	printf("M * N = %d\n", N * M);// 25
	// 常量表达式：在编译阶段，可以直接求值的表达式
	// #define N 5 是
	// const int M = 5;常量，不是常量表达式(c语言)
	// 常量表达式可以用于指定数组长度、switch语句的标签
	int arr1[N];
	// int arr2[M];// 表达式必须含有常量值
	int i = 0;
	scanf("%d", &i);
	switch (i)
	{
	case N:
		printf("N = %d\n", N);
		break;
		//case M:
		//	printf("M = %d\n", M);
		//	break;
		// 表达式必须含有常量值
	default:
		break;
	}
}
*/