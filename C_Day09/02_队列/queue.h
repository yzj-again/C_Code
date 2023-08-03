#pragma once
#define N 10
// 结构体内部没有使用标签名，可以在定别名时省略
#include<stdbool.h>
typedef struct {
	int elements[N];
	int front;
	int rear;
} Queue;
// 创建空的队列
Queue* Queue_create();
void destory(Queue* q);
void enqueue(Queue* q, int val);
int dequeue(Queue* q);
int peek(Queue* q);
bool isFull(Queue q);
bool isEmpty(Queue q);