// �����Ӧ��ʵ��
#include "linkedlist.h"
#include<stdlib.h>
#include<stdio.h>

// ��ʼ��
LinkedList* creat_list() {
	return (LinkedList*)calloc(1, sizeof(LinkedList));
}
// ����
void destory_list(LinkedList* list) {
	// �ͷŽڵ�ռ�
	Node* curr = list->head;
	while (curr != NULL)
	{
		// ����curr��Ľڵ�
		Node* next = curr->next;
		free(curr);
		// �ָ�
		curr = next;
	}
	free(list);
}
// ͷ�巨
void add_before_head(LinkedList* list, int val) {
	// ����һ���½ڵ�
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (newNode == NULL) {
		printf("Error!malloc failed in add_brfore_head");
		exit(1);
	}
	// ��ʼ���ڵ㲢����
	newNode->val = val;
	newNode->next = list->head;
	list->head = newNode;
	// �������Ϊ��
	if (list->tail == NULL) {
		list->tail = newNode;
	}
	// ����size
	list->size++;
}
// β�巨
void add_behind_tail(LinkedList* list, int val) {
	// �����½ڵ�
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (newNode == NULL) {
		printf("Error!malloc failed in add_behind_tail");
		exit(1);
	}
	// ��ʼ���ڵ�
	newNode->val = val;
	newNode->next = NULL;
	// �������Ϊ��
	if (list->size == 0) {
		list->head = newNode;
		list->tail = newNode;
	}
	else
	{
		// �����½ڵ�
		list->tail->next = newNode;
		// ����ָ����
		list->tail = newNode;
	}
	// ����size
	list->size++;
}
// �ڵ�i���ڵ�������Node
void add_node(LinkedList* list, int index, int val) {
	// ����һ���½ڵ�
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
		// �ҵ�ǰ���ڵ�Ϊindex-1�Ľڵ�
		Node* p = list->head;
		for (int i = 0; i < index - 1; i++) {
			p = p->next;
		}
		// pָ��index�Ľڵ�
		newNode->next = p->next;
		p->next = newNode;
	}
	// ����β�ڵ�
	if (index == list->size) {
		list->tail = newNode;
	}
	// ����size
	list->size++;
}
bool remove_node(LinkedList* list, int val) {
	Node* prev = NULL;
	Node* curr = list->head;
	// Ѱ��ǰ���ڵ�
	while (curr != NULL && curr->val != val)
	{
		prev = curr;
		curr = curr->next;
	}
	// û��������Ԫ��
	if (curr == NULL) return false;
	// ɾ����һ��Ԫ��
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
		// ɾ�����һ��Ԫ��
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
	// û���ҵ�
	return -1;

}