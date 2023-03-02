#include<bits/stdc++.h>
using namespace std;

class DisjointSet{
   vector<int> parent;vector<int> rank ;int n;
   public:
      DisjointSet(int n)
      {
         this->n = n;
         vector<int> r(n,0);
         vector<int> p(n,0);
         parent = p; rank = r;
         makeSet();
      }

      void makeSet()
      {
         for(int i = 0;i<n;i++)
         {
            parent[i]=i;
            rank[i]=0;
         }
      }

   int findParent(int node)
   {
      if(parent[node]==node)
         return node;
      return parent[node]=findParent(parent[node]);
   }

   void makeUnion(int node1,int node2)
   {
      if(rank[node1]==rank[node2])
      {
         parent[node1]=node2;
         rank[node2]++;
      }
      else if(rank[node1]<rank[node2])
      {
         parent[node1]=node2;
         rank[node2]++;
      }
      else{
         parent[node2]=node1;
         rank[node1]++;
      }
   }
};

class Graph{
    vector<vector<int>> edges;
    int N;
    public: 
        Graph(int N)
        {
            this->N=N;
        }
        void addEdge(int u,int v,int w)
        {
            edges.push_back(u,v,w);
        }
        bool cmp(vector<int> &a, vector<int> &b)
         { 
            return a[2]<b[2];
         }
         void sortEdges()
         {
            sort(edges.begin(),edges.end(),cmp);
         }
        int Kruskals()
        {
            
            DisjointSet set1(N);
            sortEdges();
            int minWt = 0;

            for(int i=0;i<edges.size();i++)
            {
                int u = set1.findParent(edges[i][0]);
                int v = set1.findParent(edges[i][1]);
                int wt = edges[i][2];

                if(u!=v)
                {
                    set1.makeUnion(u,v);
                    minWt+=wt;  
                }
            }
            return minWt;
        }
};

int main()
{  
    Graph g(4);
    g.addEdge(0, 1, 10);
    g.addEdge(1, 3, 15);
    g.addEdge(2, 3, 4);
    g.addEdge(2, 0, 6);
    g.addEdge(0, 3, 5);
    cout<<g.Kruskals();
    return 0;
}