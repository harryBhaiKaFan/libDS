#ifndef __DS420_CircularArrayQueue__
#define __DS420_CircularArrayQueue__
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct{
	int front,rear;
	int capacity;
	int *arr;
}ArrayQueue;

/**
 * Create a queue.
 **/
ArrayQueue* createQueue(unsigned int len);

/**
 * Check wheather queue is empty.
 **/
bool isEmptyQueue(ArrayQueue* queue);

/**
 * Get number of elements stored in queue.
 **/
unsigned int queueSize(ArrayQueue* queue);

/**
 * Check wheather queue is full.
 **/
bool isFullQueue(ArrayQueue* queue);

/**
 * Insert an element in the queue.
 **/
bool enQueue(ArrayQueue* queue, int val);

/**
 * Delete an element and extract it from queue into passed address.
 *
 * if address is NULL then only deletion will be performed.
 **/
bool deQueue(ArrayQueue* queue,int* retVal);

/**
 * Display the queue.
**/
void dump_queue(ArrayQueue* queue);

/**
 * Delete the queue.
 **/
void deleteQueue(ArrayQueue* queue);

#endif
