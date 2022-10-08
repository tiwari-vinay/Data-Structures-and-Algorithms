#include<bits/stdc++.h>
using namespace std;


// Bellman ford algorithms uses dynamci problem and th idea is that we find shortest path for the one edge, then shortest prath for the two edges and so on . 
// so one more use case of the bellman ford algorithm is that it doesn't operate on the negattieve edge cycle but it operates on the negative weight of edges.
// so we could bellman ford algorithm to find out the wheather there exists negatice weight cycle in the graph of not. 
// the beind the scene of bellman ford is nothing but we run dfs n-1 times on each edges. 
 
vector<int> BellmanFord(vector<vector<int>> edges,int V, int src)
{
   vector<int> dist(V,INT_MAX);
   
   dist[src]=0;

   for(int i = 0;i<V;i++)
   {
      for(int j = 0;j<edges.size();j++)
      {
         int u = edges[j][0];
         int v = edges[j][1];
         int wt = edges[j][2];

         if((dist[u]+wt)<dist[v] and dist[u]!=INT_MAX)
            dist[v]=dist[u]+wt;
      }
   }
   

   // to check for negative wt cycles.

   bool flag=false;

   for(int j=0;j<edges.size();j++)
   {
      int u = edges[j][0];
      int v = edges[j][1];
      int wt = edges[j][2];

      if((dist[u]+wt)<dist[v] and dist[u]!= INT_MAX)
         flag=true;
   }

   if(flag)
      return -1;
   return dist;
}
int main()
{
    

   return 0 ;
}