#pragma once
// 接口->适配
// 链表对外的接口
#include<stdbool.h>
typedef struct node_s {
	int val;
	struct node_s* next;
}Node;

typedef struct linkedlist_s {
	Node* head;
	Node* tail;
	int size;
} LinkedList;
// 构造方法，创建一个空链表
LinkedList* creat_list();
// 释放堆内存空间
void destory_list(LinkedList* list);



void add_before_head(LinkedList* list, int val);
void add_behind_tail(LinkedList* list, int val);
void add_node(LinkedList* list, int index, int val);

bool remove_node(LinkedList* list, int val);

int indexOf(LinkedList* list, int val);