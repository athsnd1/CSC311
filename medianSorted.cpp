#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
    node(int value): data(value), next(nullptr) {};
};

node* findMedian(node* head){
    node* slow = head;
    node* fast = head;

    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main(){
    return 0;
}