/*
#1.������һ�ֲ������޵����Ա�
��β-����-rear
��ͷ-ɾ��-front
FIFO
#2.���ã�
1.������ȱ���
2.��Ϊ������ ��Ϣ���� Kafka
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