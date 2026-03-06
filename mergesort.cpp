#include<iostream>
#include<vector>
using namespace std; 

//Merge sort algorithm:
void merge(int arr[],int start, int mid, int end){
    int length1 = mid - start + 1;
    int length2 = end - mid;

    int leftArray[length1];
    int rightArray[length2];

    for(int i = 0;i<length1;i++){
        leftArray[i] = arr[start + i];
    }

    for(int j=0;j<length2;j++){
        rightArray[j] = arr[mid + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = start;

    while(i<length1 && j<length2){
        if(leftArray[i]<=rightArray[j]){
            arr[k] = leftArray[i];
            i++;
        }else if(rightArray[j]<=leftArray[i]){
            arr[k] = rightArray[j];
            j++;
        }
        k++;
    }

    while(i<length1){
        arr[k] = leftArray[i];
        i++;
        k++;
    }
    while(j<length2){
        arr[k] = rightArray[j];
        j++;
        k++;
    }
}

vector<int> mergeSort(int arr[],int start,int end){
    vector<int> sorted;
    if(start>=end){
        return sorted;
    }

    if(start<end){
        int mid = start + (end - start)/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }

    for(int i = 0;i<end+1;i++){
        sorted.push_back(arr[i]);
    }
    return sorted;
}

void print(vector<int> numbers, int size){
    for(int i =0;i<size;i++){
        cout<<numbers[i]<<" ";
    }cout<<endl;
}

int main(){
    //Array consisting of full name ASCII codes:
    int array[] = {6,5,1,1,6,1,1,6,9,7,1,0,4,6,5,1,1,6,1,1,6,9,7,1,0,4,8,3,1,1,7,1,1,0,1,0,0,9,7,1,2,1};
    
    cout<<"Merge sorted array:"<<endl;
    vector<int> mergeSortName = mergeSort(array,0,15);
    print(mergeSortName,16);
    return 0;
}