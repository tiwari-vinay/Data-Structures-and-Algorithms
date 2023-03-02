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


      // ---------Shortest Path in DAG------------------
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


   // ------------- Shortest Path in DAG ends

   // Dikstra's Algorithms

   vector<int> Dikstra(int src)
   {
      vector<int> dist(adj.size(),INT_MAX);
      dist[src]=0;
      set<pair<int,int>> s;
      s.insert(make_pair(0,src));

      while(!s.empty())
      {
         auto top=*(s.begin());

         int nodeDistance = top.first;
         int node = top.second;

         s.erase(top);

         for(auto neighbour : adj[node])
         {
            if(nodeDistance + neighbour.second<dist[neighbour.first])
            {
               auto record = s.find(make_pair(dist[neighbour.second],neighbour.first));

               //if there exist any record we have to erase it and insert new one.
               if(record != s.end())
                  s.erase(record);

               dist[neighbour.first]=nodeDistance+neighbour.second;
               s.insert(make_pair(nodeDistance+neighbour.second,neighbour.first));
            }
         }
      }
      return dist;
   }

};


int main()
{  
   Graph g;
   g.addEdge(0, 1, 7);
   g.addEdge(0, 2, 1);
   g.addEdge(0, 3, 2);
   g.addEdge(1, 0, 7);
   g.addEdge(1, 2, 3);
   g.addEdge(1, 3, 5);
   g.addEdge(1, 4, 1);
   g.addEdge(2, 0, 1);
   g.addEdge(2, 1, 3);
   g.addEdge(3, 0, 2);
   g.addEdge(3, 1, 5);
   g.addEdge(3, 4, 7);
   g.addEdge(4, 1, 1);
   g.addEdge(4, 4, 7);


   g.printGraph();
   vector<int> dist=g.Dikstra(0);

   for(auto x: dist)
      cout<<x<<" ";


   return 0;
}