#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int visited[N];
vector<int>adj_list[N];
void bfs(int node)
{
    queue<int>q;
    visited[node]=1;
    q.push(node);
    while(!q.empty())
    {
        int head=q.front();
        q.pop();
        cout<<head<<" ";
        for(auto adj_node:adj_list[head])
        {
            if(visited[adj_node]==0)
            {
                q.push(adj_node);
                visited[adj_node]=1;
            }
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
    bfs(0);
    return 0;
}

