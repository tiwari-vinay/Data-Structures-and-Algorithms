#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> graph[],int u,int v)
{
    graph[u].push_back(v);
    graph[v].push_back(u);
}

void displayGraph(vector<int> graph[],int n)
{
    for(int i = 0;i<n;i++)
    {
        cout<<"connections of node:"<<i<<":";
        for(auto x:graph[i])
            cout<<x<<" ";
        cout<<endl;
    }
}
// void DFS(vector<int> graph[],int v,int source)
// {
//     vector<bool> visited(v,false);
//     for(int i=0;i<v;i++)
//         visited[i]=false;

//     stack<int> s;
//     s.push(source);

//     while(!s.empty())
//     {
//         int tmp=s.top();
//         s.pop();
//         if(!visited[tmp])
//         {
//             cout<<tmp<<" ";
//             visited[tmp]=true;
//         }

//         for(auto x:graph[tmp])
//         {
//             if(!visited[x]);
//             {
//                 s.push(x);
//             }
//         }
//     }
// }
void DFS_stack(vector<int> Graph[],vector<bool>visited,int source)
{
    stack<int> s;
    s.push(source);
    visited[source]=true;
    while(!s.empty())
    {
        int e= s.top();
        s.pop();
        cout<<e<<" ";
        for(auto x: Graph[source])
        {
            if(!visited[x])
            {
                s.push(x);
                visited[x]=true;                
            }
        }
    }
}
void DFS_rec(vector<int> Graph[],vector<bool> visited,int source)
{
    if(!visited[source])
    {
        cout<<source<<" ";
        visited[source]=true;
    }
    for(auto node:Graph[source])
    {
        if(!visited[node])
            {
                DFS_rec(Graph,visited,node);visited[node]=true;
            }
    }
}
void DFS(vector<int> Graph[],int v,int source)
{
    vector<bool>visited(v,false);
    if(!visited[source])
        DFS_stack(Graph,visited,source);
}

int main()
{
    int v=5;
    vector<int> graph[5];
    addEdge(graph,0,2);
    addEdge(graph,1,2);
    addEdge(graph,2,3);
    addEdge(graph,3,4);
    addEdge(graph,4,0);
    // addEdge(graph,4,3);
    // displayGraph(graph,v);
    DFS(graph,5,0);
    return 0;
}