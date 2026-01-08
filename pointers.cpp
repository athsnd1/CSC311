#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int* p = &x;
    cout<<"x value: "<<x<<endl;
    cout<<"x address: "<<&x<<endl;
    cout<<"p value(address): "<<p<<endl;
    cout<<"p points to value: "<<*p<<endl;
    *p = 12; // this changes the original value of x to 12
    cout<<"x was changed to: "<<x<<endl;
    cout<<"x address: "<<&x<<endl;// the address of x is now equal to the address of p
    cout<<"p value(address): "<<p<<endl;

    //note that using ampersand(&) plus a variable name(e.g., &var) gives the memory address of that variable

    //pointer arithmetics:
    int nums[5] = {2,3,4,5,6};
    int* pointer = nums;
    //traversing the array:
    for(int i = 0;i<5;i++){
        cout<<*(pointer)<<endl;
        cout<<*(pointer + 1)<<endl;
        cout<<*(pointer + 2)<<endl;
        cout<<*(pointer + 3)<<endl;
        cout<<*(pointer + 4)<<endl;
    }

    //null pointer:
    int* ptr = nullptr;

    //references (references can never be null):
    int& ref = x; // here the ref variable is just another name for x, it is not a pointer, no new memory is created
    cout<<"Value of &ref: "<<&ref<<endl;

    return 0;
}