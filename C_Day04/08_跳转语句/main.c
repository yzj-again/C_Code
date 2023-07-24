/*
#1.break：跳出switch，while，for语句
最常见跳出while(1){ ... }循环
注意：
当switch do-while while嵌套时，break只能跳出包含break的最内层嵌套
ex:while嵌套switch，只能跳出switch语句
想要跳出while，使用goto语句
#2.continue:跳出当前循环，跳到循环体的末尾
两者区别：
break可以用于循环语句和switch语句，而continue只能用于循环语句
break语句是跳出整个循环语句，continue语句是跳转到循环体的末尾
#3.goto语句没有这些限制，唯一的限制就是只能在同一个函数体内跳转
不用goto的原因：
代码可读性
goto太灵活，很容易出现bug
尽量少用goto语句，只有当其他方案实现不了时，才考虑使用goto语句
格式：goto 标签
使用场景：
1.跳出外层嵌套
2.使用goto进行错误处理
if(...){
	goto error_handle;
}
...
error_handle:
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	int sum = 0, count = 0, n;
	while (count < 10)
	{
		scanf("%d", &n);
		if (n == 0) {
			continue;
		}
		sum += n;
		count++;
	}
	printf("sum = %d", sum);
	return 0;
}