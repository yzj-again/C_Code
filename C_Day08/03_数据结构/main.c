/*
����
��������ɾ�����
������ĳ���ڵ�������
ɾ��ɾ��ĳ���ڵ����Ľڵ�
�飺1.��������ֵ 2.�������ض�ֵ��ȵĽڵ�(��С����)(��С����)
˫��������˵�����Ļ��������⣬����һЩ����Ļ�������
������ĳ���ڵ�ǰ�����(O(1)   O(n))
ɾ��ɾ��ĳ���ڵ�(O(1)   O(n))
�飺
1.����ǰ���ڵ�(O(1)   O(n))
2.������������ֵ(O(n)ƽ������n/4  ƽ������n/2)
3.�����ض�ֵ��ȵĽڵ�
a.��С���� (O(n)����¼��һ�β��ҵĽڵ㣬ƽ��n/4 ƽ��n/2)
b.��С���� O(n)
�ÿռ任ȡʱ��
�ഺ��LRU O(n)
*/
#include<stdio.h>
#include<stdlib.h>
#include "linkedlist.h"
int main(void) {
	LinkedList* list = creat_list();
	// ͷ�巨
	// add_before_head(list, 1);
	// add_before_head(list, 2);
	// add_before_head(list, 3);
	// β�巨
	add_behind_tail(list, 1);
	add_behind_tail(list, 2);
	// add_behind_tail(list, 3);
	add_node(list, 2, 9);
	// printf("remove sucess?%d", remove_node(list, 1));
	// printf("remove sucess?%d", remove_node(list, 9));
	// printf("remove sucess?%d", remove_node(list, 2));
	printf("first node index = %d", indexOf(list, 5));
	return 0;
}