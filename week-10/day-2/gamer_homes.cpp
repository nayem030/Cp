#include<bits/stdc++.h>
using namespace std;
const int  mod=1e9+7;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
       ll n,h;
       cin>>n>>h;
       ll ans=0;
       vector<ll>a(n);
       for(ll i=0;i<n;i++)
       {
           cin>>a[i];

       }
       sort(a.begin(),a.end(),greater<int>());
       ll sum=a[0]+a[1];
       if(a[0]>=h)
       {
           ans=1;
       }
       else if(sum>=h)
       {
           ans=2;
       }
       else
       {
          if(h%sum==0)
          {
              ans=(h/sum)*2;
          }
          else
          {
              ans=(h/sum)*2;
              if((h%sum)>a[0])
              {
                  ans=ans+2;
              }
              else
              {
                  ans++;
              }
          }
       }
       cout<<ans<<endl;
    }
}

