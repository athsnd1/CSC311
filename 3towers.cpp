#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Stack{
    private:
        vector<string> list;
        int topIndex;

    public:
        Stack(int size){
            list.resize(size,"");
        }

    bool isEmpty(){
        return topIndex < 0;
    }

    bool isFull(){
        return topIndex >= list.size() - 1;
    }

    void push(string value){
        if(isFull()){
            cout<<"Stack is full"<<endl;
            return;
        }else{
            topIndex++;
            list[topIndex] = value;
        }
    }

    string pop(){
        if(isEmpty()){
            return "Full stack error";
        }else{
            return list[topIndex];
            topIndex--;
        }
    }

    string peek(){
        if(isEmpty()){
            return "Empty stack";
        }else{ 
            return list[topIndex];
        }
    }

    string give(int index){
        if(isEmpty()){
            return "Empty stack";
        }else{
            return list[index];
        }
    }

};

int main(){

    Stack source(4);
    Stack aux(4);
    Stack dest(4);
    return 0;
}