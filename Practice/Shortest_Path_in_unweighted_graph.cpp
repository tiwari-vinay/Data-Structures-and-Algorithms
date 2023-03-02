#include<bits/stdc++.h>
using namespace std;

void Shortest_Distance(unordered_map<int,vector<int>> adj,int s,vector<int> &dist,vector<int> &path)
{
   vector<bool> vis(adj.size(),0);
   queue<int> q;
   q.push(s);
   dist[s]=0;
   // path[s]=0;
   vis[s]=true;

   while(!q.empty())
   {
      int cur=q.front();
      q.pop();
      for(auto x: adj[cur])
      {
         if(!vis[x])
         {
            vis[x]=true;
            dist[x]=dist[cur]+1;
            q.push(x);
            path[x]=cur;
         }
         
      }
   }
}

int main()
{  
   int v=8;
   unordered_map<int,vector<int>> adj(8);

   add_edge(adj, 0, 1);
   add_edge(adj, 0, 3);
   add_edge(adj, 1, 2);
   add_edge(adj, 3, 4);
   add_edge(adj, 3, 7);
   add_edge(adj, 4, 5);
   add_edge(adj, 4, 6);
   add_edge(adj, 4, 7);
   add_edge(adj, 5, 6);
   add_edge(adj, 6, 7);

   vector<bool> vis(v,false);
   vector<int> dist(v,0);
   vector<int> path(v,-1);

   int src = 0;
   int destination = 7;
   Shortest_Distance(adj,0,dist,path);

   cout<<"the length of the shortest path is: "<<dist[7];

   int cur = destination;
   cout<<endl;
   while(cur != src)
   {
      cout<<cur<<" ";
      cur = path[cur];
   }
   // cout<<path[7];cout<<path[3];
   return 0;
}