#include <bits/stdc++.h>
using namespace std;
bool DFS(int node, int parent, vector<vector<int>> &adj,
         vector<bool> &visited){
    visited[node] = true;
    for(int x : adj[node]){
        if(!visited[x]){
            if(DFS(x, node, adj, visited))
                return true;
        }
        else if(x != parent){
            return true;
        }
    }
    return false;
}

int main(){
    int n, m;
    cout << "Enter number of vertices: ";
    cin >> n;
    cout << "Enter number of edges: ";
    cin >> m;
    vector<vector<int>> adj(n);
    cout << "Enter edges:\n";
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool> visited(n, false);
    bool cycle = false;
    for(int i = 0; i < n; i++){
        if(!visited[i]){
            if(DFS(i, -1, adj, visited))
            {
                cycle = true;
                break;
            }
        }
    }

    if(cycle)
        cout << "Cycle detected";
    else
        cout << "No cycle";
    return 0;
}
