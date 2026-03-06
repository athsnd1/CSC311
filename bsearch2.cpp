#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){
    int left = 0;
    int right = size - 1;
    int mid;

    while(left <= right){
        mid = left + (right-left)/2;
        if(arr[mid] == target){
            return mid;
        }
        if(arr[mid] > target){
            right = mid - 1;
        }else if(arr[mid] < target){
            left = mid + 1;
        }
    }
    return -1;
};

int main(){
    int arr[] = {0,1,2,3,4,5,7};
    cout<<"Index of 6 is: "<<binarySearch(arr,7,4);
    return 0;
}