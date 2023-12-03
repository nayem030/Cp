#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    unordered_map<ll,ll>mp;
    ll ans=0;
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum==k)
        {
            ans=max(i+1,ans);
        }
        if(mp.find(sum-k)!=mp.end())
        {
            ll index=mp[sum-k];
            ans=max(ans,i-index);
        }
        if(mp.find(sum)==mp.end())
        {
            mp[sum]=i;
        }
    }
    cout<<ans<<endl;
    return 0;
}
