#pragma once
// 栈的接口
#include<stdbool.h>
typedef struct node_s {
	int val;
	struct node_s* next;
} Node;
//typedef struct stack_s {
//	Node* top;
//	int num;
//} Stack;
// 二级指针 改变top指针的值
void push(Node** ptr_top, int val);
int pop(Node** ptr_top);
bool isEmpty(Node* top);
int peek(Node* top);