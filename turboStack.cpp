#include<iostream>
#include<conio.h>
using namespace std;

class Stack{
    
        static const int size = 10;
        int array[size];  
        int top = -1;
    public:
        bool isEmpty(){
            return top < 0; 
        }

        bool isFull(){
            return top >= size;
        }

        void push(int value){
            if(isFull()){
                cout<<"Stack overflow error"<<endl;
                return;
            }
            array[++top] = value;
        }

        int pop(){
            if(isEmpty()){
                return -1;
            }
            return array[top];
            top--;
        }

        int peek(){
            if(isEmpty()){
                return -1;
            }
        return array[top];
        }

        void show(){
            int i;
            for(i = top;i>-1;i--){
                cout<<array[i]<<" ";
            }cout<<endl;
        }
};


int main(){
    //clrscr(): 
    int choice, data;
    Stack stack1;
    do{
        cout<<"\n1. Push\n2. Pop\n3. Peek\n4. Show\n5. Exit";
        cout<<"Enter your choice: ";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: cout<<"Enter number to push";
            cin>>data;
            stack1.push(data);
            break;
            case 2: cout<<"Popped "<<stack1.pop()<<endl;
            break;
            case 3: cout<<"Top element: "<<stack1.peek()<<endl;
            break;
            case 4: stack1.show();
            break;
            case 5: break;
            default: cout<<"Enter a valid choice";
        }
    }while(choice!=5);

   //getch();
   return 0;
}