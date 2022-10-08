#include<bits/stdc++.h>
using namespace std;


void  dfs(int node,int parent,unordered_map<int,vector<int>> adj,int timer,vector<int> &disc,vector<int> &low,vector<bool> &vis,vector<int>&ap)
{
    vis[node]=true;
    low[node]=disc[node]=timer++;

    int child = 0;

    for(auto nbr : adj[node]){
        if(nbr == parent)
            continue;

        if(!vis[nbr])
        {
            dfs(nbr,node,adj,timer, disc, low,vis,ap);
            low[node]=min(low[nbr],low[nbr]);
            
            if(low[nbr]>=low[node] and parent!=-1)
                ap.push_back(node);

            child++;
        }

        else{
            low[node]=min(low[node],disc[nbr]);
        }
    }
    if(parent==-1 and child >1) 
        ap.push_back(0);
}

int main()
{
    int v = 5 , e = 5;
    vector<pair<int,int>> edges(v);
    edges.push_back(make_pair(0,3));
    edges.push_back(make_pair(3,4));
    edges.push_back(make_pair(0,4));
    edges.push_back(make_pair(0,1));
    edges.push_back(make_pair(1,2));

    unordered_map<int,vector<int>> adj;
    for(int i =0;i<edges.size();i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int timer = 0;
    vector<int> low(v,-1);
    vector<int> disc(v,-1);
    vector<int> parent(v,-1);
    vector<bool> vis(v,false);

    vector<int> ap;
    for(int i = 0;i<v;i++)
    {
        if(!vis[i])
            dfs(i,-1,adj,timer,disc,low,vis,ap);
    }

    for(auto x: ap)
        cout<<x<<"\t";

    return 0;
}