/*
������һ�����ӽ����нڵ㴮������
�ṹ�屾����������������һ�ֻ��ڽṹ������ݽṹ��������ʹ�ýṹ��������ڵ㣬��ͨ���ڵ�֮���ָ����ʵ����ʽ�洢��
�ڵ㣺������ + ָ����
#1.�������
������������ѭ������˫������˫��ѭ������
ѭ��������ʵ���������õñȽ���
ע�⣺ֻ�ں����и�ָ�룬����ʵ�ֲ���Ӱ��main�����е�ָ���ֵ����ҪӰ��ָ���ֵ�������ö���ָ��
����ָ����������޸�ָ��ָ��ı������������������޸�ָ��ָ��ı�����ֵ��
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
	// ����һ������
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
	// ͷ�巨
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (newNode == NULL) {
		printf("����ʧ��");
		exit(1);
	}
	// ��ʼ��
	newNode->val = val;
	newNode->next = list;
	return newNode;
}
// Ŀ�����ں����иı�ָ���ֵ������ʹ�ö���ָ��
void add_to_list2(Node** ptr_list, int val) {
	// ͷ�巨
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (newNode == NULL) {
		printf("����ʧ��");
		exit(1);
	}
	// ��ʼ��
	newNode->val = val;
	newNode->next = *ptr_list;
	*ptr_list = newNode;
}