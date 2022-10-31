#include <stdio.h>
#include <stdlib.h>
#include "QueueLinked.h"

void CreateQueue(Queue *pq){
 pq->front = NULL;
 pq->rear = NULL;
 pq ->size = 0;
}

int QueueEmpty(Queue *pq){
  return pq->front == NULL;
}

int QueueFull(Queue *pq){
  return 0;
}

void Enqueue(QueueEntry item,Queue *pq){
  QueueNode *p = (QueueNode *) malloc(sizeof(QueueNode));
  p ->entry = item;
  p ->next = NULL;
  if(!pq->rear)
    pq ->front = p;
  else
    pq->rear->next = p;
  pq ->rear = p;
  pq->size++;
}

void Dequeue(QueueEntry *item,Queue *pq){
  QueueNode *p;
  p = pq->front;
  *item = p->entry;
  pq->front = p -> next;
  if(!pq->front)
    pq ->rear = NULL;
  free(p);
  pq->size--;
}

void ClearQueue(Queue *pq){

 while(pq->front){
 pq->rear = pq->front->next;
 free(pq->front);
 pq->front = pq->rear;

 }
 pq ->size = 0;
}
int QueueSize(Queue * pq){
  return pq->size;
}
