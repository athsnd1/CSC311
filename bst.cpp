#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int value): data(value), left(nullptr), right(nullptr) {};
};

Node* insert(Node* root, int value){
    if(root == nullptr){
        root = new Node(value);
    }else if(value <= root->data){
        root->left = insert(root->left,value);
    }else if(value >= root->data){
        root->left = insert(root->right,value);
    }
    return root;
}

int search(Node* root, int target){
    if(root == nullptr){
        return -1;
    }
    if(root->data == target){
        return root->data;
    }
    if(target<= root->data){
        return search(root->left,target);
    }else if(target >= root->data){
        return search(root->right,target);
    }
}

Node* deleteNode(Node* root, int key){
    if(root == nullptr){
        return root;
    }if(key <= root->data || root->right == nullptr){
        return deleteNode(root->left,key);
    }if(key>=root->data || root->left == nullptr){
        return deleteNode(root->right,key);
    }
}

Node* freeMemory(Node* root){
    if(root == nullptr){
        return root;
    }
    freeMemory(root->left);
    freeMemory(root->right);
    freeMemory(root);
}

int main(){
    return 0;
}