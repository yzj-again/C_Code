#pragma once
// �ӿ�->����
// �������Ľӿ�
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
// ���췽��������һ��������
LinkedList* creat_list();
// �ͷŶ��ڴ�ռ�
void destory_list(LinkedList* list);



void add_before_head(LinkedList* list, int val);
void add_behind_tail(LinkedList* list, int val);
void add_node(LinkedList* list, int index, int val);

bool remove_node(LinkedList* list, int val);

int indexOf(LinkedList* list, int val);