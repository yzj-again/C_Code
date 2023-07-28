/*
#1.局部变量：定义在函数里的变量 块作用域{}，从变量定义开始，到对应的块末尾
#2.外部变量（全局变量）：定义在函数外面的变量 文件作用域 从变量定义开始，到文件的末尾
#3.存储期限
1）自动存储期限 存放在栈里面的数据，具有自动存储期限，随生命周期而变化 局部变量默认是，但可以用关键字static指定为静态存储期限
2）静态存储期限 拥有永久的存储单元，在程序的整个执行期间都存在 外部变量
*/
#include<stdio.h>
int n = 2;
void foo();
void bar();
int main(void) {
	foo();
	bar();
	printf("%d", n);
	return 0;
}
void foo() {
	printf("%d", n);
}
void bar() {
	printf("%d", n);
}