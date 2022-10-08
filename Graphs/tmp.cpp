#include<bits/stdc++.h>
using namespace std;

void addEdges(vector<int> adj[], int u , int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void dfs(vector<int> adj[],int root, vector<bool> visited)
{
    if(!visited[root])
        {
            cout<<root<<" ";
            visited[root]=true;
        }
    for(auto x: adj[root])
    {
        if(!visited[x])
            {dfs(adj, x, visited);}
    }
}

int main()
{
    int n = 5;
    vector<int> v[n];
    addEdges(v,0,1);
    addEdges(v,0,4);
    addEdges(v,1,2);
    addEdges(v,2,3);
    addEdges(v,3,4);
    
    vector<bool> visited(n,false);
    dfs(v,0,visited);
    

    return 0 ;
}