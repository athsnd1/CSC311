#include<iostream>
#include<vector>
using namespace std; 

//Quick Sort algorithm:
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int partition(int arr[],int low, int high){
    int pivot = arr[high];
    int i = low - 1;

    for(int j = low; j < high; j++){
        if(arr[j] <= pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i + 1;
}

vector<int> quickSort(int arr[],int low, int high){
    vector<int> sorted2;
    if(low<high){
        int pi = partition(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }

    for(int i = 0;i<high+1;i++){
        sorted2.push_back(arr[i]);
    }
    return sorted2;
}

//function to print contents of the array:
void print(vector<int> numbers, int size){
    for(int i =0;i<size;i++){
        cout<<numbers[i]<<" ";
    }cout<<endl;
}

int main(){
    //Array containing ASCII codes for each letter in the name:
    int array[] = {6,5,1,1,6,1,1,6,9,7,1,0,4,6,5,1,1,6,1,1,6,9,7,1,0,4,8,3,1,1,7,1,1,0,1,0,0,9,7,1,2,1};
    vector<int> quickSortName = quickSort(array,0,15);
    
    cout<<"Quick sorted array:"<<endl;
    print(quickSortName,16);
    return 0;
}