#include<iostream>
#include<unordered_map>
using namespace std;

pair<int,int> findIndices(int arr[], int target, int size){
    int start = 0;
    int end = size - 1;
    int sum;
    while(start < end){
        sum = arr[start] + arr[end];
        if(sum == target){
            return {start,end};
        }

        if(sum < target){
            start++;
        }else if(sum > target){
            end--;
        }
    }
    return {-1,-1};
}

pair<int,int> indicesMap(int arr[], int target, int size){
    unordered_map<int,int> map;
    for(int i = 0;i<size;i++){
        int complement = target - arr[i];
        if(map.find(complement) != map.end()){
            return {map[complement],i};
        }
        map[arr[i]] = i;
    }
    return {-1,-1};
}

int main(){
    return 0;
}