#ifndef QUEUEARRAY_H_INCLUDED
#define QUEUEARRAY_H_INCLUDED
#define MAX 10
typedef int QueueEntry;

typedef struct queue{
  int front;
  int rear;
  int size;
  QueueEntry entry[MAX];
}Queue;

void CreateQueue(Queue *pq);
int QueueEmpty(Queue *pq);
int QueueFull(Queue *pq);
void Enqueue(QueueEntry item,Queue *pq);
void Dequeue(QueueEntry *item,Queue *pq);
void ClearQueue(Queue *pq);
int QueueSize(Queue * pq);
#endif // QUEUEARRAY_H_INCLUDED
