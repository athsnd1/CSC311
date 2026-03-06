#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void bfs(vector<vector<int>>& adj, int start){
    int size = adj.size();
    vector<bool> visited(size,false);
    queue<int> q;
    visited[start] = true;
    q.push(start);

    while(!q.empty()){
        int vertex = q.front();
        q.pop();
        cout<<vertex<<" ";
        for(int neighbor : adj[vertex]){
            if(!visited[neighbor]){
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

int main(){
    int v = 5;
    vector<vector<int>> adj(v);

    adj[0] = {1,4};
    adj[1] = {0,2,3};
    adj[2] = {1,3};
    adj[3] = {1,2,3};
    adj[4] = {0,3};

    bfs(adj,0);
    return 0;
}