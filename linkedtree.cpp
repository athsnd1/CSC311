#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* leftChild;
    Node* rightChild;
    Node* parent;
};

class linkTree{
    public:
    Node* root;
    linkTree(){
        root = nullptr;
    }

    void addRoot(int data){
        Node* newNode = new Node();
        newNode->data = data;
        newNode->rightChild = nullptr;
        newNode->leftChild = nullptr;
        newNode->parent = nullptr;
        if(root==nullptr){
            root = newNode;
            return;
        }

    }

    void addLeftChild(int data){
        Node* curr = root;
        Node* newNode = new Node();
        newNode->data = data;
        newNode->leftChild = nullptr;
        newNode->rightChild = nullptr;

        if(curr == nullptr){
            cout<<"Root node is empty"<<endl;
            return;
        }
        while(curr!= nullptr){
            curr = curr->leftChild;
        }curr->leftChild = newNode;
        cout<<"data added:"<<curr->leftChild->data<<endl;
    }

    void addRightChild(int data){
        Node* curr = root;
        Node* newNode = new Node();
        newNode->data = data;
        newNode->leftChild = nullptr;
        newNode->rightChild = nullptr;

        if(curr == nullptr){
            cout<<"Root node is empty"<<endl;
            return;
        }
        while(curr!= nullptr){
            curr = curr->rightChild;
        }curr->rightChild = newNode;
        cout<<"data added:"<<curr->rightChild->data<<endl;
    }
};

int main(){
    linkTree tree;
    tree.addRoot(10);
    tree.addLeftChild(20);
    tree.addRightChild(30);
    return 0;
}