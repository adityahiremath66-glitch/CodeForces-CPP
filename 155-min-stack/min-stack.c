#include <stdlib.h>

#define MAX 30000

int st[MAX], minSt[MAX];
int top = -1, minTop = -1;

typedef struct {
    int dummy;
} MinStack;

MinStack* minStackCreate() {
    top = -1;
    minTop = -1;
    return (MinStack*)malloc(sizeof(MinStack));
}

void minStackPush(MinStack* obj, int val) {
    st[++top] = val;

    if (minTop == -1 || val <= minSt[minTop]) {
        minSt[++minTop] = val;
    }
}

void minStackPop(MinStack* obj) {
    int val = st[top--];

    if(val == minSt[minTop]){
        minTop--;
    }
}

int minStackTop(MinStack* obj) {
    return st[top];
}

int minStackGetMin(MinStack* obj) {
    return minSt[minTop];
}

void minStackFree(MinStack* obj) {
    free(obj);
}

/**
 * Your MinStack struct will be instantiated and called as such:
 * MinStack* obj = minStackCreate();
 * minStackPush(obj, value);
 
 * minStackPop(obj);
 
 * int param_3 = minStackTop(obj);
 
 * int param_4 = minStackGetMin(obj);
 
 * minStackFree(obj);
*/