#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int visited[N];
vector<int>adj_list[N];
void dfs(int node)
{
    cout<<node<<" ";
    visited[node]=1;
    for( auto adj_node:adj_list[node])
    {
        if(visited[adj_node]==0)
        {
            dfs(adj_node);
        }
    }
}
int main()
{
    int nodes,edges;
    cin>>nodes>>edges;
    for(int i=0;i<edges;i++)
    {
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    dfs(0);
    return 0;
}
