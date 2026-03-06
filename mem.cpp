#include<iostream>
using namespace std;

int main(){

    int* p = (int*)malloc(sizeof(int));//here we reserve an area of memory in the heap for an int
    //p stores the starting address of that int on the heap, p is in the stack however in the stack frame of the main funcion
    //we could also do:
    int* ptr = new int;
    *p = 20;//here we dereference the pointer, gain access to the memory area and set the value to 20
    *ptr = 10;

    free(ptr);//we freed memory for the ptr variable which stores a heap adress for the int value 10
    delete p;//we also freed memory using the delete keyword

    int* pointer = (int*)malloc(20*sizeof(int));//we reserved 20 * 4 bytes (an int) worth of memory space
    //in order to store integer values contiguously as we would in an array
    //to manipulate elements in that array:
    pointer[0] = 20;//setting values in the array
    *(pointer + 1) = 10;
    //accessing values can be done by pointer[index], or *(pointer + index)
    //freeing pointer memory for an array:
    delete[] pointer;



    return 0;
}