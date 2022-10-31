#include <stdio.h>
#include <stdlib.h>
#include "QueueArray.h"

void CreateQueue(Queue *pq){
 pq->front = 0;
 pq->rear = -1;
 pq ->size = 0;
}

int QueueEmpty(Queue *pq){
  return pq->size == 0;
}

int QueueFull(Queue *pq){
  return pq->size == MAX;
}

void Enqueue(QueueEntry item,Queue *pq){
  pq->rear = (pq->rear + 1) % MAX;
  pq->entry[pq->rear] = item;
  pq->size++;
}

void Dequeue(QueueEntry *item,Queue *pq){
  *item = pq->entry[pq->front];
  pq->front = (pq->front + 1) % MAX;
  pq->size--;
}

void ClearQueue(Queue *pq){
 pq->front = 0;
 pq->rear = -1;
 pq ->size = 0;
}
int QueueSize(Queue * pq){
  return pq->size;
}
