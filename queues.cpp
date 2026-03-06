#include<iostream>
using namespace std;

class Queue{
    static const int MAX = 20;
    public:
        int front = 0;
        int rear = -1;
        int arr[MAX];

    bool isEmpty(){
        if(front < 0){
            return true;
        }else{
            return false;
        }
    }

    bool isFull(){
        if(rear >= MAX-1){
            return true;
        }else{
            return false;
        }
    }

    void enqueue(int val){
        if(isFull()){
            cout<<"Queue is full"<<endl;
            return;
        }else{
            rear++;
            arr[rear] = val;
        }
    }

    int dequeue(){
        if(isEmpty() || front > rear){
            cout<<"Queue is empty"<<endl;
            return -1;
        }else{
            return arr[front];
            front++;
        }
    }

    int peek(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }else{
            return arr[front];
        }
    }
};

int main(){
    Queue q;
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    int size = sizeof(q.arr)/q.arr[0];

    cout<<"Elements in the queue:"<<endl;
    for(int i = 0;i<size;i++){
        cout<<q.arr[i]<<endl;
    }
    return 0;
}