class MyCircularQueue {
public:
    int front=-1,rear=-1;
    int n;
    vector<int> q;
    MyCircularQueue(int k) {
        n = k;
        q.resize(k);
    }
    bool enQueue(int val) {
        if(isFull()){
            return false;
        }
        if(isEmpty()){
            front++;
        }
        rear = (rear+1)%n; 
        q[rear] = val;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()){
            return false;
        }
        if(front == rear){
            front = rear = -1;
        }else{
            front = (front+1)%n;
        }
        return true;
    }
    
    int Front() {
        if(isEmpty()){
            return -1;
        }
        return q[front];
    }
    
    int Rear() {
        if(isEmpty()){
            return -1;
        }
        return q[rear];
    }
    
    bool isEmpty() {
        return front == -1;
    }
    
    bool isFull() {
        return (rear+1)%n == front && !isEmpty();
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */