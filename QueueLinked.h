#ifndef QUEUELINKED_H_INCLUDED
#define QUEUELINKED_H_INCLUDED
typedef int QueueEntry;
typedef struct queuenode{
QueueEntry entry;
struct queuenode *next;
}QueueNode;

typedef struct queue{
  QueueNode *front;
  QueueNode *rear;
  int size;
}Queue;

void CreateQueue(Queue *pq);
int QueueEmpty(Queue *pq);
int QueueFull(Queue *pq);
void Enqueue(QueueEntry item,Queue *pq);
void Dequeue(QueueEntry *item,Queue *pq);
void ClearQueue(Queue *pq);
int QueueSize(Queue * pq);

#endif // QUEUELINKED_H_INCLUDED
