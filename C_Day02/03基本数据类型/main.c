#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	// 在监视里可以用sizeof()查看数据类型的大小 运算符
	// long 64位8字节 gcc -m32编译成32位
	// short 2 long 4 int 4 long long 8
	// 无符号的输入占位符是%u
	// %o无符号八进制整数 %x无符号十六进制整数
	unsigned n;
	scanf("%u", &n);
	printf("八进制n = %o", n);
	printf("十进制n = %u", n);
	printf("十六进制n = %x", n);
	// 八进制n = 173十进制n = 123十六进制n = 7b
	// 长度修饰符
	short s;
	scanf("%hd");
	printf("%hd", s);
	float a;
	double b;
	scanf("%f");
	scanf("%lf");
	printf("%f\n", a);
	printf("%lf\n", b);
	return 0;
}