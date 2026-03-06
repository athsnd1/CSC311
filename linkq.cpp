#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

class LinkQ{
    private:
        Node* front;
        Node* rear;

    bool isEmpty(){
        return front == nullptr;
    }

    void enqueue(int val){
        Node* newNode = new Node;
        newNode->data = val;
        newNode->next = nullptr;
        Node* curr = front;
        if(curr==nullptr){
            front = rear = newNode;
        }
        else{
            while(curr!=nullptr){
                curr = curr->next;
        }}curr->next = newNode;
    }

    int dequeue(){
        Node* temp;
        Node* current = front;
        if(current==nullptr){
            return -1;
        }else{
            temp = current;
            return current->data;
            current=current->next;
            delete temp;
        }
    }

    
};

int main(){
    return 0;
}