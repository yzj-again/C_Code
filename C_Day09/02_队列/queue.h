#pragma once
#define N 10
// �ṹ���ڲ�û��ʹ�ñ�ǩ���������ڶ�����ʱʡ��
#include<stdbool.h>
typedef struct {
	int elements[N];
	int front;
	int rear;
} Queue;
// �����յĶ���
Queue* Queue_create();
void destory(Queue* q);
void enqueue(Queue* q, int val);
int dequeue(Queue* q);
int peek(Queue* q);
bool isFull(Queue q);
bool isEmpty(Queue q);