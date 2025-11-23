#include <stdio.h>
#include <stdlib.h>

// A structure for deque
typedef struct {
    int *arr;
    int front, rear, size;
} Deque;

// Initialize deque
Deque* createDeque(int n) {
    Deque* dq = (Deque*)malloc(sizeof(Deque));
    dq->arr = (int*)malloc(n * sizeof(int));
    dq->front = dq->rear = -1;
    dq->size = n;
    return dq;
}

// Check if deque is empty
int isEmpty(Deque* dq) {
    return dq->front == -1;
}

// Push element at rear
void pushRear(Deque* dq, int x) {
    if (dq->rear == dq->size - 1) return; // overflow
    if (dq->front == -1) dq->front = 0;
    dq->arr[++dq->rear] = x;
}

// Pop element from front
void popFront(Deque* dq) {
    if (isEmpty(dq)) return;
    dq->front++;
    if (dq->front > dq->rear) dq->front = dq->rear = -1;
}

// Pop element from rear
void popRear(Deque* dq) {
    if (isEmpty(dq)) return;
    dq->rear--;
    if (dq->rear < dq->front) dq->front = dq->rear = -1;
}

// Get front element
int getFront(Deque* dq) {
    return 0;
    
