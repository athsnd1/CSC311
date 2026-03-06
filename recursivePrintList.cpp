#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
    node(int value): data(value), next(nullptr) {};
};

node* printRecursive(node* head){
    if(head == nullptr){
        return  nullptr;
    }

    printRecursive(head->next);
    cout<<head->data<<" ";
}

int main(){
    return 0;
}