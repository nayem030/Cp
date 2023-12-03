#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
typedef long long ll;
const int N=2e5+10;
vector<ll>adj_list[N];
vector<ll>visited[N];
vector<ll>L;
vector<ll>R;
vector<ll>sum;
int ans;
void dfs(int curr,int par)
{
    for(auto i:adj_list[curr])
    {
        if(i!=par)
        {
            dfs(i,curr);
        }
    }
    if(sum[curr]<L[curr])
    {
        ans++;
        sum[curr]=R[curr];
    }
    else if(sum[curr]>R[curr])
    {
         sum[curr]=R[curr];
    }
    if(par!=-1)
    {
        sum[par]+=sum[curr];
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>p(n+1);
        for(ll i=2;i<=n;i++)
        {
            cin>>p[i];
        }
        for(ll i=1;i<=n+1;i++)
        {
            adj_list[i].clear();
        }
        L.resize(n+1);
        R.resize(n+1);
        sum.assign(n+1,0);
        for(ll i=2;i<=n;i++)
        {
            adj_list[p[i]].push_back(i);
            adj_list[i].push_back(p[i]);

        }
        for(ll i=1;i<=n;i++)
        {
            ll l,r;
            cin>>l>>r;
            L[i]=l;
            R[i]=r;
        }
        ans=0;
        dfs(1,-1);
        cout<<ans<<endl;
    }
    return 0;
}
