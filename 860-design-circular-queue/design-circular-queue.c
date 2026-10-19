
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int front, rear, n;
    int *q;
} MyCircularQueue;

MyCircularQueue cq;

MyCircularQueue* myCircularQueueCreate(int k) {
    cq.q = malloc(k * sizeof(int));
    cq.front = cq.rear = -1;
    cq.n = k;
    return &cq;
}

bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
    return cq.front == -1;
}

bool myCircularQueueIsFull(MyCircularQueue* obj) {
    return !myCircularQueueIsEmpty(obj) &&
           (cq.rear + 1) % cq.n == cq.front;
}

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
    if (myCircularQueueIsFull(obj))
        return false;

    if (myCircularQueueIsEmpty(obj))
        cq.front = cq.rear = 0;
    else
        cq.rear = (cq.rear + 1) % cq.n;

    cq.q[cq.rear] = value;
    return true;
}

bool myCircularQueueDeQueue(MyCircularQueue* obj) {
    if (myCircularQueueIsEmpty(obj))
        return false;

    if (cq.front == cq.rear)
        cq.front = cq.rear = -1;
    else
        cq.front = (cq.front + 1) % cq.n;

    return true;
}

int myCircularQueueFront(MyCircularQueue* obj) {
    return myCircularQueueIsEmpty(obj) ? -1 : cq.q[cq.front];
}

int myCircularQueueRear(MyCircularQueue* obj) {
    return myCircularQueueIsEmpty(obj) ? -1 : cq.q[cq.rear];
}

void myCircularQueueFree(MyCircularQueue* obj) {
    free(cq.q);
    cq.q = NULL;
    cq.front = cq.rear = -1;
    cq.n = 0;
}
