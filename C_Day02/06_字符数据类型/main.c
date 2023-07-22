#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	// 0 null 32 space 48 数字0 65 A 97 a
	// char 约等于int 可以进行运算
	int i = 'a';
	char c = 'A';
	c = c + 1;
	c++;
	printf("i = %c, c = %c", i, c);// i = %c i = a;i = %d i = 97
	// 转义序列 
	// 1.字符转义序列 \a \b \f \n \r \t \v \\ \? \' \"
	// 2.数字转义序列(所有字符) 包括八进制，十六进制 \0 \101 'A' \x0 \x41 'A'
	// 字符处理函数
	// 读写字符数据
	// 1.scanf配合printf %c
	char c1;
	// scanf(" %c", &c1);
	// 注意%c不会忽略前面的空白字符
	// 如何忽略前面的空格scanf(" %c", &c1);
	// printf("%c\n", c1);
	// 2.getchar和putchar
	// 不能忽略输入的空白字符
	c1 = getchar();
	putchar(c1);
	// 常见用法
	char ch1, ch2;
	ch1 = getchar();
	while (getchar() != '\n') {

	}// 读取这一行剩余的字符
	ch2 = getchar();
	return 0;
}