#ifndef __C_QUEUE_H__
#define __C_QUEUE_H__

#define TRUE 1
#define FALSE 0

#define QUE_LEN 100
typedef int Data;

typedef struct _cQueue
{
	int front;
	int rear;
	Data queArr[QUE_LEN];
}CQueue;

typedef CQueue Queue;

void QueueInit(Queue* pa);
int QIsEmpty(Queue* pa);

void Enqueue(Queue* pa, Data data);
Data Dequeue(Queue* pa);
Data QPeek(Queue* pa);

#endif
