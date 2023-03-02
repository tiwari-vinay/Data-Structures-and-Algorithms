#include<bits/stdc++.h>
using namespace std;


void dfs(int node,int parent,unordered_map<int,vector<int>>&adj,vector<int>&low,vector<int> &disc,vector<bool> &vis,vector<pair<int,int>>&bridge,int &timer)
{
    vis[node]=true;
    disc[node]=low[node]=timer++;

    for(auto nbr: adj[node])
    {
        if(nbr == parent)
            continue;
        if(!vis[node])
        {
            dfs(nbr , node,adj,low,disc,vis,bridge,timer);
            low[node]=min(low[node],low[nbr]);

            // now chk if this is bridge or not
            if(low[nbr]>disc[node])
            {
                auto p=make_pair(node,nbr);
                bridge.push_back(p);
            }
        }
        else{
            low[node]=min(low[node],disc[nbr]);
        }
    }
}
void addEdge(unordered_map<int,vector<int>> &adj,int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(unordered_map<int,vector<int>> adj)
{
    for(int i=0;i<adj.size();i++)
    {
        cout<<i<<"--->";
        for(auto x: adj[i])
            cout<<x<<" ";
        cout<<endl;
    }
}
int main()
{
    int n=5; int e;
    unordered_map<int,vector<int>> adj;
    addEdge(adj,0, 1);
    addEdge(adj,1, 2);
    addEdge(adj,2, 0);
    addEdge(adj,1, 3);
    addEdge(adj,1, 4);
    addEdge(adj,1, 6);
    addEdge(adj,3, 5);
    addEdge(adj,4, 5);

    n = adj.size();

    vector<bool> vis(n,false);
    vector<int> low(n,-1);
    vector<int> disc(n,-1);
    vector<pair<int,int>> bridge;

    int parent=-1;
    int timer = 0;

    for(int i=0;i<n;i++)
    {
        if(!vis[i])
            dfs(i,parent,adj,low,disc,vis,bridge,timer);
    }

    cout<<"the bridges are :"<<"\tnode1"<<"\tnode2"<<endl;
    for(int i=0;i<bridge.size();i++)
    {
        cout<<bridge[i].first<<"\t"<<bridge[i].second<<endl;
    }
    cout<<endl<<bridge.size();
    cout<<endl;
    printGraph(adj);


    return 0;
}