#include<iostream>
using namespace std;

void insertionSort(int arr[],int size){
    for(int i=1;i<size-1;i++){
        int key = arr[i];
        int j = i -1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j= j-1;
        }
        arr[j+1]=key;
    }
}

int main(){
    return 0;
}