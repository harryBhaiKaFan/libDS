#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "CircularArrayQueue.h"


ArrayQueue* createQueue(unsigned int len)
{
	ArrayQueue* queue = (ArrayQueue*)malloc(sizeof(ArrayQueue));

	queue->front = queue->rear = -1;
	queue->capacity = len;
	queue->arr = (int*)malloc(sizeof(int)*len);

	return queue;
}

bool isEmptyQueue(ArrayQueue* queue)
{
	return queue->front == -1;
}

unsigned int queueSize(ArrayQueue* queue)
{
	return ((queue->capacity -queue->front +queue->rear +1)%queue->capacity);
}

bool isFullQueue(ArrayQueue* queue)
{
	return ((queue->rear+1)%queue->capacity == queue->front);
}


bool enQueue(ArrayQueue* queue, int val)
{
	if(isFullQueue(queue))
		return false;

	queue->rear = (queue->rear+1)%queue->capacity;
	queue->arr[queue->rear] = val;

	if(queue->front == -1)
		queue->front = queue->rear;

	return true;
}

bool deQueue(ArrayQueue* queue,int *ptr)
{
	if(isEmptyQueue(queue))
		return false;

	if(ptr != NULL)
	*ptr = queue->arr[queue->front];

	if(queue->front == queue->rear)
		queue->front = queue->rear = -1;
	else
		queue->front = (queue->front+1)%queue->capacity;

	return true;
}

void dump_queue(ArrayQueue* queue)
{
	int i=queue->front;
	for(; i!=queue->rear; i=(i+1)%queue->capacity)
	{
		printf("%d ",queue->arr[i]);
	}
	printf("%d\n",queue->arr[i]);
}

void deleteQueue(ArrayQueue* queue)
{
	free(queue->arr);
	free(queue);
}
