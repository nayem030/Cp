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
           vector<pair<ll,ll>>p;
           vector<ll>a(n);
           for(int i=0;i<n;i++)
           {
               cin>>a[i];
               p.push_back({a[i],i});
           }
           sort(p.begin(),p.end());
           vector<ll>ans(n,0);
           ll time=0;
           ll index=1;
           for(ll i=n-1;i>=0;i-=2)
           {
               ll value=2*index;
               time=time+(p[i].first)*value;
               ans[p[i].second]=index;
               index++;
           }
           index=-1;
           for(ll i=n-2;i>=0;i-=2)
           {
               ll value=2*abs(index);
               time=time+(p[i].first)*value;
               ans[p[i].second]=index;
               index--;
           }
           cout<<time<<endl;
           cout<<0<<" ";
           for(auto it:ans)
           {
               cout<<it<<" ";

           }
           cout<<endl;
    }
    return 0;
}

