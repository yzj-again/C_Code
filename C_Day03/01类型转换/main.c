/*
1.为什么需要类型转换？
硬件只能对具有相同类型的数据进行计算
2.何时会发生类型转换？
给定的数据类型与需要的数据类型不匹配
3.隐式类型转换
char + char = int
short + short = int (short和char只要参与运算，都会转换成int类型参与运算) 整数提升
int + int = int
int + long = long
int + long long = long long
long + long = long
long + long long = long long
--------------------------------------
float + float = float
float + double = double
double + double = double
float + 任何整型都是 = float
--------------------------------------
signed->unsigned（不要将有符号整数和无符号整数进行运算）
4.显示类型转换（强制类型转换）
可以让程序员更精确的控制类型转换
格式 (type_name)expression;
*/
#include<stdio.h>
int main(void) {
	//char ch = 'A';
	//short s = 1;
	//int i = 10;
	//long l = 100l;
	//long long ll = 10000ll;
	//float f = 3.14f;
	//double d = 2.67;
	//int i1 = -1;// ->0xffffffff
	//unsigned int u = 100;// ->ox00000064
	//if (i < u) {
	//	printf("i1 is less than u\n");
	//}
	//else
	//{
	//	printf("i1 is greater than u\n");// 1
	//}
	// 1.计算浮点数的小数部分
	double d = 3.1415926535, fraction;
	fraction = d - (int)d;
	printf("fraction = %lf", fraction);// fraction = 0.140000 fraction = 0.141593
	// 2.表面肯定会发生的转换，提高代码的可读性
	float f = 3.14f;
	// ...
	int i = (int)f;
	// 3.对类型转换进行更精确地控制
	int a = 4, b = 3;
	double q;
	// q = a / b;
	q = (double)a / b;
	printf("q = %lf", q);// q = 1.333333
	// 4.可以避免溢出
	long long mll = 24 * 60 * 60 * 1000;
	long long nll = (long long)24 * 60 * 60 * 1000 * 1000 * 1000;
	// 整数常量默认是int类型，超过了int类型的范围
	printf("nll/mll = %lld", nll / mll);// nll/mll = 1000000
	return 0;
}