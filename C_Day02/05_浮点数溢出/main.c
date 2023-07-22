#include<stdio.h>
int main(void) {
	float f = -.1e-3;// 0.0001
	// 浮点数：IEEE-754存储标准
	// 分开存储 最高一位=数符 中间8位=指数部分 后面24位=小数部分 (float)
	float l = 1.23456789e10, d;
	d = l + 20;
	printf("d = %f", d);// d = 12345678848.000000 赋值时就丢失了精度
	return 0;
}