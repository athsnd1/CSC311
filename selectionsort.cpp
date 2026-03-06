#include<iostream>
using namespace std;

void selectionSort(int arr[], int size){
    for(int i=0;i<size-1;i++){
        int small = i;
        for(int j = i+1;j<size;j++){
            if(arr[j]<arr[small]){
                small = j;
            }
        }
        int temp = arr[i];
        arr[i]=arr[small];
        arr[small]=temp;
    }
    for(int k =0;k<size;k++){
        cout<<arr[k]<<" ";
    }cout<<endl;
}

int main(){
    int array[]={2,3,7,8,1,10};
    selectionSort(array,6);
    return 0;
}