#include<bits/stdc++.h>
using namespace std;

class Graph{
   unordered_map<int, vector<pair<int , int>>> adj;
   public: 
      void addEdge(int u , int v , int weight)
      {
         pair<int, int> p = make_pair(v,weight);
         adj[u].push_back(p);
      }

      void printGraph()
      {
         for(auto node:adj)
         {
            cout<<node.first<<"-->";
            for(auto neighbor : node.second)
            {
               cout<<"("<<neighbor.first<<","<<neighbor.second<<")"<<endl;
            }
         }
      }
      void Topological_Search(int node, vector<bool> &visited,stack<int> &s)
      {
         visited[node]=true;
         for(auto x: adj[node])
         {
            if(!visited[x.first])
            {
               visited[x.first]=true;
               Topological_Search(x.first,visited,s);
            }
         }
         s.push(node);
      }

   void Shortest_Path(int src, stack<int> s,vector<int> &dist)
   {
      dist[src]=0;
      while(!s.empty())
      {
         int cur_node = s.top();
         s.pop();
         
         if(dist[cur_node]!=INT_MAX)
         {
            for(auto neighbor:adj[cur_node])
            {
               if(dist[neighbor.first]>dist[cur_node]+neighbor.second)
                  dist[neighbor.first]=dist[cur_node]+neighbor.second;
            }
         }
      }
   }

};


int main()
{  
   Graph g;
   g.addEdge(0, 1, 5);
   g.addEdge(0, 2, 3);
   g.addEdge(1, 3, 6);
   g.addEdge(1, 2, 2);
   g.addEdge(2, 4, 4);
   g.addEdge(2, 5, 2);
   g.addEdge(2, 3, 7);
   g.addEdge(3, 4, -1);
   g.addEdge(4, 5, -2);

   g.printGraph();

   int n = 6;

   // Topological Sorting of the graph and storing it in the stack 
   stack<int> s;
   vector<bool> visited(n,0);
   for(int i=0;i<n;i++)
   {
      if(!visited[i])
         g.Topological_Search(i,visited,s);
   }
   
   // Marking the nodes as non visited;
   for(int i =0 ;i< n;i++)
      visited[i]=0;

   // finding out the shortest from source to all the vertices.
   vector<int> dist(n,INT_MAX);
   int src = 1;
   g.Shortest_Path(src,s,dist);
   for(auto X: dist)
      cout<<endl<<X<<" ";

   return 0;
}