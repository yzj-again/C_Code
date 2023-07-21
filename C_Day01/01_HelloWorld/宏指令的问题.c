/*
#include<stdio.h>
#define N 5
#define FOO(x) (1 + (x) + (x) * (x))
#define TOO() do { printf("Hello "); \
printf("World\n");} while(0)
void foo();
int main(void) {
	int i = 1, j = 2;
	int k = FOO(2);// 1 + 2 + 2 * 2
	// 注意宏函数的使用
	// 左括号应该津贴宏函数的名称
	// 把整个宏函数表达式用括号括起来，否则运算顺序发生错误
	// 为宏函数的参数添加括号
	// 警惕宏函数导致的多次副作用
	// 定义完备的多语句宏函数，把几个语句当作一个整体 do-while循环
	int l = 3 * FOO(2);
	// l = 3 * 1 +2 +2 * 2 = 9
	int m = FOO(1 + 2);
	// m = ( 1 + 1 + 2 +1 + 2 * 1 + 2)
	int n = FOO(++i);
	// n = (1 + (++i) + (++i) * (++i))
	foo();
	printf("HelloWorld.i / j = %d\n", i / j);
	printf("N * N = %d\n", N * N);
	printf("k = %d\n", k);
	printf("l = %d\n", l);// 9
	printf("m = %d\n", m);// 13
	printf("n = %d\n", n);// 21
	TOO();// Hello World
	if (0)
		TOO();
	// 可以正常使用并添加;
	return 0;
}
void foo() {
	int i, j;
	i = 10;
	j = 20;
	printf("Hello Kitty.\n");
}
*/
