#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};

Node* reverseList(Node* head){
    Node* prev = nullptr;
    Node* curr = head;

    // the mental picture i'm painting is: a->b->c->nullptr
    while(curr!=nullptr){
        Node* next = curr->next; //next now points to b since a is the current node
        curr->next = prev; //now b points to nothing/prev/nullptr for a moment
        prev = curr; //at this point b now points to a bc prev is now a (the current node)
        curr = next; //now we switch from node a to node b

    }

    return prev; //we return prev bc at the end of the while loop, prev is c or the head of the list
    
}
int main(){

    Node* head;

    Node* node1 = new Node;
    node1 -> data = 5;
    node1 -> next = nullptr;

    head = node1; //head now points to node1

    Node* node2 = new Node;
    node2 -> data = 10;
    node2 -> next = nullptr;

    node1 -> next = node2;

    Node* node3 = new Node;
    node3 -> data = 15;
    node3 -> next = nullptr;
    
    node2 -> next = node3;

    cout<<"Initial forward traversal (before reversal): "<<endl;

    Node* curr = head;
    int i = 0;
    while(curr!=nullptr){
        cout<<"["<<"Node "<<i+1<<": "<<curr->data<<" | "<<curr<<"]"<<" --> ";
        curr = curr->next;
        i+=1;
    }cout<<""<<endl;
    cout<<""<<endl;

    cout<<"Forward traversal (after reversal): "<<endl;
    int n = 4;
    Node* current = reverseList(head);
    while(current!=nullptr){
        cout<<"["<<"Node "<<n-1<<": "<<current->data<<" | "<<current<<"]"<<" --> ";
        current = current->next;
        n-=1;
    }cout<<""<<endl;
    cout<<""<<endl;
    

    // cleaning up the memory mess
    Node* crt = head;
    while(crt!=nullptr){
        Node* temp = crt;
        crt = crt->next;
        delete temp;
    }
    
    return 0;
}