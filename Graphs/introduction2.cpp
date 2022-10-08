#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> graph[],int u,int v){
    graph[u].push_back(v);
    graph[v].push_back(u);
}

void PrintGraph(vector<int> graph[],int v)
{
    for(int i=0;i<v;i++)
    {
        cout<<"Connected Nodes to"<<"   "<<i<<":   ";
        for(auto x:graph[i])
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int v=5;
    vector<int> graph[v];
    addEdge(graph,0,3);
    addEdge(graph,2,4);
    addEdge(graph,3,2);
    addEdge(graph,4,1);
    addEdge(graph,1,2);
    PrintGraph(graph,v);
    return 0;
}