/*
#1.�������޵����Ա�ֻ����ջ����Ӻ�ɾ��Ԫ��
LIFO
#2.���ã�
1.��������
2.������ȱ���
3.�������ǰ������
4.����ƥ��
5.��׺���ʽ��ְ
*/
#include "mystack.h"
#include<stdio.h>
int main(void) {
	// ��ջ
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