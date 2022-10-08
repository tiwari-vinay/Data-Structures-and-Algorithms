#include<bits/stdc++.h>
using namespace std;


void createGraph(unordered_map<int,vector<int>> &graph,int x,int y)
{
   graph[x].push_back(y);
   graph[y].push_back(x);
}

void printGraph(unordered_map<int,vector<int>> graph)
{
   int n = graph.size();
   for(int i=0;i<n;i++)
   {
      for(auto X:graph[i])
         cout<<X<<" ";
      cout<<endl;
   }
}

void DFS(unordered_map<int,vector<int>> m,int source)
{
   int n = m.size();

   bool visited[n];
   for(int i=0;i<n;i++)
      visited[i]=false;

   stack<int> s;
   s.push(source);
   visited[source]=true;

   while(!s.empty())
   {
      int current = s.top();
      cout<<current<<" ";
      s.pop();

      for(auto x: m[current])
      {
         if(!visited[x])
         {
            s.push(x);
            visited[x]=true;
         }
      }
   }
}

void BFS(unordered_map<int,vector<int>>graph,int source)
{
   int n = graph.size();
   vector<bool> visited(n,false);

   queue<int> q;
   q.push(source);
   visited[source]=true;

   while(!q.empty())
   {
      int current=q.front();
      cout<<current;
      q.pop();

      for(auto x: graph[current])
      {
         if(!visited[x])
         {
            q.push(x);
            visited[x]=true;
         }
      }
   }
}

//We could solve the DFS using recursion because down the line recursion also uses stack.
void DFS_Recursive(unordered_map<int,vector<int>> graph,int source,vector<bool> visited)
{
   if(!visited[source])
      cout<<source<<" ";
   visited[source]=true;

   for(auto x: graph[source])
   {
      if(!visited[x])
         DFS_Recursive(graph,x,visited);
   }
}

int main()
{  
   int V=6;
   unordered_map<int,vector<int>> graph(6);

   createGraph(graph,0,2);
   createGraph(graph,0,5);
   createGraph(graph,2,4);
   // createGraph(graph,2,3);
   createGraph(graph,4,3);
   vector<bool> visited(V,false);
   
   // printGraph(graph);
   BFS(graph,2);
   cout<<endl;
   DFS_Recursive(graph,0,visited);


   return 0;

}