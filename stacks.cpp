#include<iostream>
#include<stack>
using namespace std;

class myStack{
    public:
        static const int MAX_SIZE = 10;
        int topIndex = -1;
        int arr[MAX_SIZE];
        int size = MAX_SIZE;

    bool isEmpty(){
        return topIndex < 0;
    }

    bool isFull(){
        return topIndex >= MAX_SIZE-1;
    }

    void push(int val){
        if(isFull()){
            cout<<"Stack is full\n";
            return;
        }else{
            topIndex++;
            arr[topIndex] = val;
        }
        
    }

    int pop(){
        if(isEmpty()){
            cout<<"Stack is empty";
            return;
        }else{
            cout<<"Top "
            topIndex--;
        }
    }
};
int main(){
    // attempted manual implementation:
    myStack stck;
    stck.push(34);
    cout<<stck.pop()<<endl;
    return 0;
}