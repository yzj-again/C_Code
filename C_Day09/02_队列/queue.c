#include "queue.h"
#include<stdio.h>
#include<stdlib.h>
Queue* Queue_create() {
	return (Queue*)calloc(1, sizeof(Queue));
}
void enqueue(Queue* q, int val) {
	if (isFull(*q)) {
		printf("Error:queue is full.\n");
		exit(1);
	}
	q->elements[q->rear] = val;
	// ¸üÐÂrear
	q->rear = (q->rear + 1) % N;
}
int dequeue(Queue* q) {
	if (isEmpty(*q)) {
		printf("Error:queue is empty.\n");
		exit(1);
	}
	int temp = q->elements[q->front];
	q->front = (q->front + 1) % N;
	return temp;
}
int peek(Queue* q) {
	if (isEmpty(*q)) {
		printf("Error:queue is full.\n");
		exit(1);
	}
	return q->elements[q->front];
}
bool isFull(Queue q) {
	return q.front == (q.rear + 1) % N;
}
bool isEmpty(Queue q) {
	return q.front == q.rear;
}