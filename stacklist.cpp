#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

class StackList{
    public:
        Node* top;
    
    public:
        StackList(){
            top = nullptr;
        }
    
    void push(int val){
            Node* newNode = new Node();
            newNode->data = val;
            newNode->next = top;

            top = newNode;
    }

    int pop(){
        if(top == nullptr){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        Node* curr = top;
        return top->data;
        top = top->next;
        delete curr;
    }

    void peek(){
        if(top == nullptr){
            cout<<"Stack is empty"<<endl;
            return;
        }
        Node* current = top;
        cout<<"Value at top of stack: "<<current->data<<endl;
    }
};

int main(){
    StackList slist;
    slist.push(20);
    slist.push(30);
    slist.push(40);

    cout<<"First peeking attempt: "<<endl;
    cout<<slist.top->data<<endl;

    cout<<"Traversing the stack:"<<endl;
    cout<<""<<endl;

    Node* crt = slist.top;
    int i = 0;
    cout<<"Elements in the array:"<<endl;
    while(crt!=nullptr){
        cout<<"["<<(i + 1)<<"|Data:"<<crt->data<<"|Address:"<<crt<<"]-->";
        crt = crt->next;
        i++;
    }cout<<"[NULL]";
    cout<<""<<endl;
    return 0;
}