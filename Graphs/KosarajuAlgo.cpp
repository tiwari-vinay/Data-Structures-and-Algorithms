#include<bits/stdc++.h>
using namespace std;

//unordered_map<int,vector<int>> adj;
void addEdge(unordered_map<int,vector<int>> &adj,int u,int v)
{
    adj[u].push_back(v);
}

void printGraph(unordered_map<int,vector<int>> adj)
{
    for(auto x: adj)
    {
        cout<<x.first<<"-->";
        for(auto y : x.second)
            cout<<y<<" ";
        cout<<endl;
    }
}

void TopologicalSort(unordered_map<int,vector<int>> &adj,stack<int> &s,vector<int> &visited,int node)
{
    visited[node]=true;
    for(auto x:adj[node])
    {
        if(!visited[x])
            TopologicalSort(adj,s,visited,x);
    }
    s.push(node);
}

void dfs(unordered_map<int,vector<int>> adj,vector<int> &visited,int node)
{
    visited[node]=true;
    for(auto x: adj[node])
        if(!visited[i])
            dfs(adj,visited,x)
}

void Kosaraju(unordered_map<int,vector<int>&transpose,stack<int> s,)
{
    /*
        Kosaraju algorithms is used to find out the strongly connected components.
        Steps of algorithm
            1.find topological sorting.
            2.transpose graph.
            3.run dfs 
    */

//    1.fist thing find out the topological sort
    

    // 2.find out the transpose

}

int main()
{   
    unordered_map<int,vector<int>> adj;

    addEdge(adj,0,3);
    addEdge(adj,1,4);
    addEdge(adj,2,0);
    addEdge(adj,4,1);
    addEdge(adj,4,2);

    //Creating the transpose of the graph.
    unordered_map<int,vector<int>> transpose;
    for(auto x: adj)
    {
        for(auto y: x.second)
            addEdge(transpose,y,x.first);
    }

    //Creating the topological sort
    stack<int> s;
    vector<int> visited(adj.size(),false);
    for(auto x: adj)
    {
        if(!visited[x.first])
            TopologicalSort(adj,s,visited,x.first);
    }

    for(int i=0;i<visited.size();i++)
        visited[i]=false;

    cout<<s.size();

    printGraph(adj);cout<<endl;
    printGraph(transpose);




    return 0 ;
}