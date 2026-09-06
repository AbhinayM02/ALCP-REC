#include <bits/stdc++.h>
using namespace std;

void DFS(int node, vector<vector<int>> &adj, vector<bool> &visited)
{
    visited[node] = true;

    cout << node << " ";

    for(int x : adj[node])
    {
        if(!visited[x])
            DFS(x, adj, visited);
    }
}

int main()
{
    int n, m;

    cout << "Enter number of vertices: ";
    cin >> n;

    cout << "Enter number of edges: ";
    cin >> m;

    vector<vector<int>> adj(n);

    cout << "Enter edges:\n";

    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> visited(n, false);

    cout << "DFS: ";

    for(int i = 0; i < n; i++)
    {
        if(!visited[i])
            DFS(i, adj, visited);
    }

    return 0;
}
