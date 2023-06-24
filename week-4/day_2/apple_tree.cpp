#include<bits/stdc++.h>
using namespace std;
const long long N=2e5+5;
vector<long long>adj_list[N];
long long cnt[N];
void dfs(long long node,long long p)
{
    if(adj_list[node].size()==1 && node!=1)
    {
        cnt[node]=1;
    }
    for(auto child: adj_list[node])
    {
        if(child!=p)
        {
            dfs(child,node);
            cnt[node]+=cnt[child];
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin>>t;
    while(t--);
    {
        long long n;
        cin>>n;
        for(long long i=1;i<=n;i++)
        {
            cnt[i]=0;
            adj_list[i].clear();
        }
        for(long long i=1;i<n;i++)
        {
            long long u,v;
            adj_list[u].push_back(v);
            adj_list[v].push_back(u);
        }
        dfs(1,-1);
        long long q;
        cin>>q;
        while(q--)
        {
            long long x,y;
            cin>>x>>y;
            cout<<cnt[x]*cnt[y]<<endl;
        }
    }
    return 0;
}
