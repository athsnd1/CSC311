#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

class QList{
    private:
        Node* front;    
        Node* rear;

    public:
        QList(){
            front = rear = nullptr;
        }

    void enqueue(int val){
        Node* newNode = new Node();
        newNode->data = val;
        newNode->next = nullptr;

        if(rear == nullptr){
            front = rear = newNode;
            return;
        }

        rear->next = newNode;
        rear = newNode;
    }

    int dequeue(){
        if(front == nullptr){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        Node* temp = front;
        front = front->next;
        if(front == nullptr){
            rear = nullptr;
        }
        delete temp;

    }

    void flush(){
        Node* crt = front;
        while(crt!=nullptr){
            Node* temp = crt;
            crt = crt->next;
            delete temp;
            cout<<"Memory cleared"<<endl;
        }
    }
};

int main(){
    return 0;
}