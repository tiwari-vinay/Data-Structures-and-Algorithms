#include<bits/stdc++.h>
using namespace std;


bool Cycle_in_Graph(unordered_map<int,vector<int>> graph,int source, vector<bool> visited,int parent)
{
   visited[source]=true;
   for(auto neighbor : graph[source])
   {
      if(!visited[neighbor])
         if( Cycle_in_Graph(graph,neighbor,visited,source))
            return true;
      else if(neighbor!=parent)
         return true;
   }
   return false;
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
   
   for(int i=0;i<V;i++)
   {
      if(Cycle_in_Graph(graph,i,visited,-1))
      {
         cout<<"cyclic graph";
         break;
      }
   }

   return 0;
}