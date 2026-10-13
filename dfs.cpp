#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, vector<vector<int>>& adj,
         vector<bool>& visited) {

    visited[node] = true;
    cout << node << " ";

    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited);
            // cout<<"Yes";
        }
    }
}

int main(){
    vector<vector<int>> adj={{1,2,3}, {0,4}, {0,5}, {0,7}, {1}, {2,6}, {5}, {3,8}, {7}};
    vector<bool> visited(adj.size(),false);
    dfs(0, adj, visited);
}