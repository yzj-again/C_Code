/*
链表：用一条链子将所有节点串联起来
结构体本身并不是链表，链表是一种基于结构体的数据结构，它可以使用结构体来定义节点，并通过节点之间的指针来实现链式存储。
节点：数据域 + 指针域
#1.链表分类
单向链表、单向循环链表、双向链表、双向循环链表
循环链表在实现生产中用得比较少
注意：只在函数中改指针，还是实现不了影响main函数中的指针的值，想要影响指针的值，必须用二级指针
二级指针可以用来修改指针指向的变量本身，而不仅仅是修改指针指向的变量的值。
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct node_s {
	int val;
	struct node_s* next;
}Node;
Node* add_to_list1(Node* list, int val);
void add_to_list2(Node** ptr_list, int val);
int main(void) {
	// 构建一个链表
	/*Node* list = NULL;
	list = add_to_list1(list, 1);
	list = add_to_list1(list, 2);
	list = add_to_list1(list, 3);
	list = add_to_list1(list, 4);*/
	Node* list = NULL;
	add_to_list2(&list, 1);
	add_to_list2(&list, 2);
	add_to_list2(&list, 3);
	add_to_list2(&list, 4);
	return 0;
}
Node* add_to_list1(Node* list, int val) {
	// 头插法
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (newNode == NULL) {
		printf("分配失败");
		exit(1);
	}
	// 初始化
	newNode->val = val;
	newNode->next = list;
	return newNode;
}
// 目的是在函数中改变指针的值，必须使用二级指针
void add_to_list2(Node** ptr_list, int val) {
	// 头插法
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (newNode == NULL) {
		printf("分配失败");
		exit(1);
	}
	// 初始化
	newNode->val = val;
	newNode->next = *ptr_list;
	*ptr_list = newNode;
}