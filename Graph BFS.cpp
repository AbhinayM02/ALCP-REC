#include <bits/stdc++.h>
using namespace std;
void BFS(int start,vector<vector<int>> &adj,vector<bool> &visited){
    queue<int> q;
    q.push(start);
    visited[start]=true;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        cout<<node<<" ";
        for(int x:adj[node]){
            if(!visited[x]){
                visited[x]=true;
                q.push(x);
            }
        }
    }
}
int main(){
    int n,m;
    cout<<"Enter number of vertices: ";
    cin>>n;
    cout<<"Enter number of edges: ";
    cin>>m;
    vector<vector<int>> adj(n);
    cout<<"Enter edges:\n";
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool> visited(n,false);
    cout<<"BFS: ";
    for(int i=0;i<n;i++){
        if(!visited[i])
            BFS(i,adj,visited);
    }
    return 0;
}
