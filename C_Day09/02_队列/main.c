/*
#1.队列是一种操作受限的线性表
队尾-插入-rear
队头-删除-front
FIFO
#2.作用：
1.广度优先遍历
2.作为缓冲区 消息队列 Kafka
*/
#include"queue.h"
#include<stdio.h>
int main(void) {
	Queue* q = Queue_create();
	for (int i = 0; i < N - 1; i++) {
		enqueue(q, i);
	}
	for (int i = 0; i < N - 1; i++) {
		printf("dequeue = %d\n", dequeue(q));
	}
	return 0;
}