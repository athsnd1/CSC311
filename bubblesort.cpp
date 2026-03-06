#include<iostream>
using namespace std;

void bubbleSort(int arr[],int sizearr){

    for(int i = 0;i<sizearr-1;i++){
        for(int j=0;j<sizearr-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int k=0;k<sizearr;k++){
        cout<<arr[k]<<" ";
    }
};

int main(){
    int array[] = {9,5,3,4,8};
    bubbleSort(array,5);
    return 0;
}