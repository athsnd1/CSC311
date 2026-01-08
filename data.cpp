#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<queue>
using namespace std;

struct Node{
    int data;
    Node* next;
};
int main(){
    /**arrays:
    int arr[5] = {5,5,3,3,5};
    cout<<arr[4]; 

    //stacks:
    stack<int> mystack;
    mystack.push(2);
    mystack.pop();

    //queues:
    queue<int> q;
    q.push(5);
    q.pop(); **/

    //linkedlists:
    Node* head = new Node;

    Node* node1 = new Node;
    node1 -> data = 5;
    node1 -> next = nullptr;

    head = node1;

    Node* node2 = new Node;
    node2 -> data = 10;
    node2 -> next = nullptr;

    node1 -> next = node2;

    Node* node3 = new Node;
    node3 -> data = 20;
    node3 -> next = nullptr;

    node2 -> next = node3;


    // Adding a node at the beginning of the list
    Node* topNode = new Node;
    topNode -> data = 1;
    topNode -> next = head;
    head = topNode;

    // Adding a node at the end of the list:
    Node* lastNode = new Node;
    lastNode -> data = 30;
    lastNode -> next = nullptr;


     
    //Printing node addresses:
    
    if(head == nullptr){
        head = lastNode;
    }else{
    Node* curr = head;
    cout<<"Node addresses: "<<endl;
    int i = 0;
    while(curr!=nullptr){
        cout<<"Node "<< i + 1<<": "<<curr<<endl; // this prints the address of the current node while &curr prints the address of the pointer variable itself
        curr = curr->next;
        i += 1;
    }
    curr->next = lastNode;
    }
   

    //Traversing the linked list:
    /**Node* current = head;
    while(current!=nullptr){
        cout<<current->data<<"-> ";
        current = current->next;
    }
    cout<<endl;**/

    //cleaning up to prevent memory leaks:
    Node* current = head;
    while(current!=nullptr){
        Node* temp = current;
        current = current->next;
        delete temp;
    }


    return 0;

}