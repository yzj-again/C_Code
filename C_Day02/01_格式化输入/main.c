#include<stdio.h>
int main(void) {
	int i = 123;
	// i =  123 不够会在前面补空格
	printf("i = %4d\n", i);
	// i = 123  负号左对齐，正号右对齐，默认右对齐
	printf("i = %-4d\n", i);
	int j = 1234;
	// i = 1234 相等，正常输出
	printf("i = %4d\n", j);
	int k = 12345;
	// i = 12345 超过会自动扩展
	printf("i = %4d\n", k);
	printf("-------------------\n");
	// %m.px m 和 p 精度控制 
	int m = 40;
	float f = 3.1415f;
	printf("|%d|%5d|%-5d|%5.3d|\n", m, m, m, m);
	// |40|   40|40   |  040|
	printf("|%f|%10f|%10.2f|%-10.2f|\n", f, f, f, f);
	// |3.141500|  3.141500|      3.14|3.14      |
	printf("-------------------\n");
	int n = printf("HelloWorld.");
	printf("n = %d\n", n);// printf 返回格式化输出串的长度
	return 0;
}