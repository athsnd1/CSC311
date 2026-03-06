#include<iostream>
#include<vector>
#include<stack>
using namespace std;


void recursiveDFS(vector<vector<int>>& adj, int source){
    int size = adj.size();
    vector<bool> visited(size,false);
    visited[source] = true;
    cout<<source<<" ";

    for(int neighbor : adj[source]){
        if(!visited[neighbor]){
            recursiveDFS(adj,neighbor);
        }
    }
}

void iterativeDFS(vector<vector<int>>& adj, int source){
    int size = adj.size();
    vector<bool> visited(size,false);
    stack<int> stk;

    visited[source] = true;
    stk.push(source);

    while(!stk.empty()){
        int vertex = stk.top();
        stk.pop();
        if(!visited[vertex]){
            visited[vertex] = true;
            cout<<vertex<<" ";
            for(int neighbor : adj[vertex]){
                if(!visited[neighbor]){
                    stk.push(neighbor);
                }
            }
        }
    }
}

int main(){
    return 0;
}