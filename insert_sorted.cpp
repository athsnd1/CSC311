#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node(int value) : data(value), next(nullptr) {};
};

node* insertSorted(node* head, int value){
    node* newNode = new node(value);

    if(head == nullptr){
        head = newNode;
    }

    if(value < head->data){
        newNode->next = head;
        return newNode;
    }

    node* current = head;
    while(current->next != nullptr || current->next->data < value){
        current = current->next;
    }

    newNode->next = current->next;
    current->next = newNode;
    return head;

}

int main(){
    return 0;
}