#pragma once
// ջ�Ľӿ�
#include<stdbool.h>
typedef struct node_s {
	int val;
	struct node_s* next;
} Node;
//typedef struct stack_s {
//	Node* top;
//	int num;
//} Stack;
// ����ָ�� �ı�topָ���ֵ
void push(Node** ptr_top, int val);
int pop(Node** ptr_top);
bool isEmpty(Node* top);
int peek(Node* top);