#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
ll msb(ll n)
{
    if(n==0)
        return 0;
    n=n/2;
    ll b=0;
    while(n!=0)
    {
        n=n/2;
        b++;
    }
    return b;
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
           vector<ll>a(n+1);
           for(ll i=1;i<=n;i++)
           {
               cin>>a[i];
           }
           unordered_map<ll,vector<ll>>mp;
           for(ll i=1;i<=n;i++)
           {
               ll b=msb(a[i]);
               mp[b].push_back(i);
           }
           ll ans=0;
           for(auto it:mp)
           {
               ll value=it.second.size();
               ans+=((value)*(value-1))/2;
           }
           cout<<ans<<endl;
    }
    return 0;
}

