#include<bits/stdc++.h>
using namespace std;

void addEdge(unordered_map<int,vector<pair<int,int>>> adj,int u,int v,int w)
{
   adj[u].push_back(make_pair(v,w));
   adj[v].push_back(make_pair(u,w));
}

int Prims(unordered_map<int,vector<pair<int,int>>> adj)
{
   int n = adj.size();
   vector<int> parent(adj.size(),-1);
   vector<int> key(adj.size(),INT_MAX);
   vector<bool> mst(adj.size(),false);

   int ans = 0;
   parent[0]=-1;
   mst[0]=true;
   key[0]=0;

   for(int i = 0;i<adj.size();i++)
   {
      int mini = INT_MAX;
      int min_node;

      for(int i = 0;i<adj.size();i++)
      {
         if(mst[i]==false and key[i]<mini)
            mini = key[i],min_node = i;
      }

      mst[min_node]=true;
      ans += adj[min_node].second;

      for(auto x: adj[min_node])
      {
         if(mst[x.first]== false and key[x.first]>s.second)
         {
            key[s.first]=s.second;
            parent[x.first]=min_node;
         }
      }
   }
   return ans;
   // we have out parent array, we could use it and create the mst graph.
}

void ShowMST(vector<int> parent)
{
   
}


int main()
{
   unordered_map<int,vector<pair<int,int>>> adj;
   
   return 0;
}