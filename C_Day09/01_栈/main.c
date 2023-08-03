/*
#1.操作受限的线性表，只能在栈顶添加和删除元素
LIFO
#2.作用：
1.函数调用
2.深度优先遍历
3.浏览器的前进后退
4.括号匹配
5.后缀表达式求职
*/
#include "mystack.h"
#include<stdio.h>
int main(void) {
	// 空栈
	Node* top = NULL;
	push(&top, 1);
	push(&top, 2);
	push(&top, 3);
	push(&top, 4);
	printf("top = %d\n", peek(top));
	printf("out stack = %d\n", pop(&top));
	printf("top = %d\n", peek(top));
	return 0;
}