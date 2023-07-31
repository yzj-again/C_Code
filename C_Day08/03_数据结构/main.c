/*
链表
单链表增删查遍历
增：在某个节点后面添加
删：删除某个节点后面的节点
查：1.索引查找值 2.查找与特定值相等的节点(大小有序)(大小无序)
双向链表除了单链表的基础操作外，还有一些额外的基础操作
增：在某个节点前面添加(O(1)   O(n))
删：删除某个节点(O(1)   O(n))
查：
1.查找前驱节点(O(1)   O(n))
2.根据索引查找值(O(n)平均遍历n/4  平均遍历n/2)
3.查找特定值相等的节点
a.大小有序 (O(n)，记录上一次查找的节点，平均n/4 平均n/2)
b.大小无序 O(n)
用空间换取时间
青春版LRU O(n)
*/
#include<stdio.h>
#include<stdlib.h>
#include "linkedlist.h"
int main(void) {
	LinkedList* list = creat_list();
	// 头插法
	// add_before_head(list, 1);
	// add_before_head(list, 2);
	// add_before_head(list, 3);
	// 尾插法
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