/*
我们可以用typedef给类型起别名
格式：typedef type_name alias
typedef int Bool
区别于宏定义
1.宏定义是在预处理阶段进行处理的，简单的文本替换，编译器是不能识别宏定义的，不能给出友好提示；
typedef是关键字，在编译时处理，有类型检查功能。它在自己的作用域内给一个已经存在的类型一个别名，但不能在一个函数定义里面使用typedef。
2.#define不只是可以为类型取别名，还可以定义常量、变量、编译开关等；typedef只能用来定义类型的别名，起到类型易于记忆的功能（可读性）。另一个功能是定义机器无关的类型。
3.#define没有作用域的限制，只要是之前预定义过的宏，在以后的程序中都可以使用，而typedef有自己的作用域。
------------------------------------------------
sizeof运算符
作用：计算某一类型的数据所占内存空间的大小（以字节为单位）
*/
#include<stdio.h>
int main(void) {
	int i = 3;
	// int arr[i];
	// 在编译时就能确定sizeof的运算结果，可以看作是一个常量表达式，可以表示数组长度
	int arr[sizeof(i)];
	return 0;
}