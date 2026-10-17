#include <stdlib.h>
#include <stdbool.h>
typedef struct {
    int front;
    int rear;
    int n;
    int *q;
} MyCircularQueue;

MyCircularQueue* myCircularQueueCreate(int k) {
    MyCircularQueue* obj = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));

    obj->front = -1;
    obj->rear = -1;
    obj->n = k;
    obj->q = (int*)malloc(k * sizeof(int));

    return obj;
}
bool myCircularQueueIsFull(MyCircularQueue* obj);
bool myCircularQueueIsEmpty(MyCircularQueue* obj);
bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
    if (myCircularQueueIsFull(obj)) {
        return false;
    }

    if (myCircularQueueIsEmpty(obj)) {
        obj->front = 0;
        obj->rear = 0;
    } else {
        obj->rear = (obj->rear + 1) % obj->n;
    }

    obj->q[obj->rear] = value;
    return true;
}

bool myCircularQueueDeQueue(MyCircularQueue* obj) {
    if (myCircularQueueIsEmpty(obj)) {
        return false;
    }

    if (obj->front == obj->rear) {
        obj->front = -1;
        obj->rear = -1;
    } else {
        obj->front = (obj->front + 1) % obj->n;
    }

    return true;
}

int myCircularQueueFront(MyCircularQueue* obj) {
    if (myCircularQueueIsEmpty(obj)) {
        return -1;
    }

    return obj->q[obj->front];
}

int myCircularQueueRear(MyCircularQueue* obj) {
    if (myCircularQueueIsEmpty(obj)) {
        return -1;
    }

    return obj->q[obj->rear];
}

bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
    return obj->front == -1;
}

bool myCircularQueueIsFull(MyCircularQueue* obj) {
    return !myCircularQueueIsEmpty(obj) &&
           (obj->rear + 1) % obj->n == obj->front;
}

void myCircularQueueFree(MyCircularQueue* obj) {
    free(obj->q);
    free(obj);
}