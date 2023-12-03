#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
ll solve(vector<pair<ll,ll>>v,ll lf,ll x)
{
    vector<ll>pref(x+1,0);
    for(auto i:v)
    {
        if(lf>=i.first and lf<=i.second)
        {
            continue;
        }
        pref[i.first]++;
        pref[i.second+1]--;
    }
    ll mx=0;
    for(ll i=1;i<x;i++)
    {
        pref[i]+=pref[i-1];
        mx=max(mx,pref[i]);
    }
    return mx;
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
        ll n,m;
        cin>>n>>m;
        set<ll>s;
        s.insert(1);
        s.insert(m);
        ll x=1;
        vector<pair<ll,ll>>v;
        for(ll i=0;i<n;i++)
        {
            ll l,r;
            cin>>l>>r;
            v.push_back({l,r});
            s.insert(l);
            s.insert(r);
        }
        unordered_map<ll,ll>mp;
        for(auto i:s)
        {
            mp[i]=x;
            x++;
        }
        for(ll i=0;i<n;i++)
        {
            v[i].first=mp[v[i].first];
            v[i].second=mp[v[i].second];
        }
        ll ans=solve(v,1,x);
        ll ans1=solve(v,x-1,x);
        ans=max(ans,ans1);
        cout<<ans<<endl;
    }
    return 0;
}
