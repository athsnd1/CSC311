#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* prev;
    Node* next;
};

int main(){
    Node* head = new Node;

    Node* node1 = new Node;
    node1 -> data = 5;
    node1 -> next = nullptr;
    node1 -> prev = nullptr;

    head = node1;

    Node* node2 = new Node;
    node2 -> data = 10;
    node2 -> next = nullptr;
    node2 -> prev = head;
    
    node1 -> next = node2;

    Node* node3 = new Node;
    node3 -> data = 20;
    node3 -> next = nullptr;
    node3 -> prev = node2;
    
    node2 -> next = node3;

    if(head->next==nullptr){
        head = node2;
    }else{
        Node* curr = head;
        int i = 0;
        cout<<"Forward traversal (Node Addresses): "<<endl;
        while(curr!=nullptr){
            cout<<"["<<"Node "<<i+1<<": "<<curr<<"]"<<" --> ";
            curr = curr -> next;
            i+=1;
        }cout<<"[null]";

        cout<<""<<endl;
        cout<<""<<endl;
        cout<<"Backward traversal (Node Addresses): "<<endl;
        int n = 4;
        Node* tail = head;
        while(tail->next!=nullptr){
            tail = tail->next;
        }

        Node* crt = tail;
        while(crt!=nullptr){
            cout<<"["<<"Node "<<n-1<<": "<<crt<<"]"<<" --> ";
            crt = crt -> prev;
            n-=1;
        }cout<<"[null]";
    }


    if(head->next == nullptr){
        head = node2;
    }else{
        Node* current = head;
        while(current!=nullptr){
            Node* temp = current;
            current = current->next;
            delete temp;
        }
    }

    return 0;
}