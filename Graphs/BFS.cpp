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

void DFS(vector<int> graph[],int v,int sourse)
{
   bool visited[v];
   for(int i=0;i<v;i++)
    visited[i]=false;

   queue<int> q;
   q.push(sourse);
   visited[sourse]=true;
   
   while(!q.empty())
   {
       int tmp=q.front();
       cout<<tmp<<" ";
       q.pop();
       for(auto x:graph[tmp]){
           if(visited[x]==false)
            {
                q.push(x);
                visited[x]=true;
            }
       }
   }

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