// 链表对应的实现
#include "linkedlist.h"
#include<stdlib.h>
#include<stdio.h>

// 初始化
LinkedList* creat_list() {
	return (LinkedList*)calloc(1, sizeof(LinkedList));
}
// 销毁
void destory_list(LinkedList* list) {
	// 释放节点空间
	Node* curr = list->head;
	while (curr != NULL)
	{
		// 保存curr后的节点
		Node* next = curr->next;
		free(curr);
		// 恢复
		curr = next;
	}
	free(list);
}
// 头插法
void add_before_head(LinkedList* list, int val) {
	// 创建一个新节点
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (newNode == NULL) {
		printf("Error!malloc failed in add_brfore_head");
		exit(1);
	}
	// 初始化节点并链接
	newNode->val = val;
	newNode->next = list->head;
	list->head = newNode;
	// 如果链表为空
	if (list->tail == NULL) {
		list->tail = newNode;
	}
	// 更新size
	list->size++;
}
// 尾插法
void add_behind_tail(LinkedList* list, int val) {
	// 创建新节点
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (newNode == NULL) {
		printf("Error!malloc failed in add_behind_tail");
		exit(1);
	}
	// 初始化节点
	newNode->val = val;
	newNode->next = NULL;
	// 如果链表为空
	if (list->size == 0) {
		list->head = newNode;
		list->tail = newNode;
	}
	else
	{
		// 链接新节点
		list->tail->next = newNode;
		// 更新指针域
		list->tail = newNode;
	}
	// 更新size
	list->size++;
}
// 在第i个节点后面插入Node
void add_node(LinkedList* list, int index, int val) {
	// 创建一个新节点
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (newNode == NULL) {
		printf("Error!malloc failed in add_brfore_head\n");
		exit(1);
	}
	newNode->val = val;
	newNode->next = NULL;
	if (index == 1) {
		newNode->next = list->head->next;
		list->head->next = newNode;
	}
	else
	{
		// 找到前驱节点为index-1的节点
		Node* p = list->head;
		for (int i = 0; i < index - 1; i++) {
			p = p->next;
		}
		// p指向index的节点
		newNode->next = p->next;
		p->next = newNode;
	}
	// 更新尾节点
	if (index == list->size) {
		list->tail = newNode;
	}
	// 更新size
	list->size++;
}
bool remove_node(LinkedList* list, int val) {
	Node* prev = NULL;
	Node* curr = list->head;
	// 寻找前驱节点
	while (curr != NULL && curr->val != val)
	{
		prev = curr;
		curr = curr->next;
	}
	// 没有这样的元素
	if (curr == NULL) return false;
	// 删除第一个元素
	if (prev == NULL) {
		if (list->size == 1) {
			list->head = list->tail = NULL;
		}
		else
		{
			list->head = curr->next;
		}
		free(curr);
	}
	else {
		prev->next = curr->next;
		// 删除最后一个元素
		if (prev->next == NULL) {
			list->tail = prev;
		}
		free(curr);
	}
	// size
	list->size--;
	return true;
}
int indexOf(LinkedList* list, int val) {
	Node* curr = list->head;
	for (int i = 0; i < list->size; i++) {
		if (curr->val == val) {
			return i + 1;
		}
		curr = curr->next;
	}
	// 没有找到
	return -1;

}