#include "mystack.h"
#include<stdlib.h>
#include<stdio.h>
void push(Node** ptr_top, int val) {
	// 创建新节点
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (newNode == NULL) {
		printf("Error:malloc failed in push\n");
		exit(1);
	}
	// 初始化节点
	newNode->val = val;
	newNode->next = NULL;
	// 头插法
	newNode->next = *ptr_top;
	*ptr_top = newNode;
}

int pop(Node** ptr_top) {
	if (isEmpty(*ptr_top)) {
		printf("Error:stack is empty.\n");
		exit(1);
	}
	// 不为空，删除，要释放
	Node* old_top = *ptr_top;
	int result = old_top->val;
	*ptr_top = (*ptr_top)->next;
	free(old_top);
	return result;
}

bool isEmpty(Node* top) {
	return top == NULL;
}
int peek(Node* top) {
	if (isEmpty(top)) {
		printf("Error:stack is empty.\n");
		exit(1);
	}
	return top->val;
}