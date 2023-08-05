#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll>a(n);
        vector<pair<ll,ll>>p;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            p.push_back({a[i],i});
        }
        sort(p.begin(),p.end());
       ll i=n-1;
       ll ans=0;
       while(i>=0)
       {
           if(p[i].second==i)
           {
               i--;
               continue;
           }
           else
           {
              ans=p[i].first;
              break;
           }
       }
       cout<<ans<<endl;
    }
    return 0;
}

