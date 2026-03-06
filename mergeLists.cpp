#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node(int value): data(value), next(nullptr) {};
};

node* mergeSorted(node* head1, node* head2){
    if(head1 == nullptr){
        return head2;
    }

    if(head2 == nullptr){
        return head1;
    }

    if(head1->data <= head2->data){
        head1->next = mergeSorted(head1->next,head2);
        return head1;
    }else{
        head2->next = mergeSorted(head1,head2->next);
        return head2;
    }
}

int main(){
    return 0;
}