#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
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
       vector<ll>a(n);
       for(ll i=0;i<n;i++)
       {
           cin>>a[i];
       }
       vector<pair<ll,ll>>ans;
       for(ll i=0;i<n;i++)
       {
           ll x=(1ll<<((ll)log2(a[i]))+1ll);
           if(x-a[i]!=0)
           {
               ans.push_back({i+1,x-a[i]});
           }
       }
       cout<<ans.size()<<endl;
       for(auto it:ans)
       {
           cout<<it.first<<" "<<it.second<<endl;
       }
    }
    return 0;

}
