/*
自增 i += 1 i = i + 1
前置和后置
i++ 整个表达式的值为i,副作用是i自增
++i 整个表达式的值为i+1,副作用是i自增
注意：会产生未定义的行为
i = i++
对于i++保存的临时值，c语言中是返回临时值后，在自增
j = (i++) + (i++)
a[i]=b[i++]
*/
#include<stdio.h>
int main(void) {
	/*
	int i = 1;
	i = i++;
	printf("%d", i);
	printf("i = %d\n", i++);
	printf("i = %d\n", i);
	printf("i = %d\n", ++i);
	printf("i = %d\n", i);
	*/
	// 1 2 3 3 
	int i, j, k;
	i = 1;
	j = 2;
	k = ++i + j++;
	printf("i = %d, j = %d, k = %d\n", i, j, k);// 2 3 4
	return 0;
}