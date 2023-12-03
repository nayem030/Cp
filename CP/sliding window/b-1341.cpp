#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      ll n,k;
      cin>>n>>k;
      vector<ll>a(n);
      for(ll i=0;i<n;i++)
      {
          cin>>a[i];
      }
      ll ans=0,l=1,pices=0;
      ll i=1,j=1;
      for(i=1;i<k-1;i++)
      {
          if(a[i]>a[i-1] and a[i]>a[i+1])
          {
              pices++;
          }
      }
      ans=pices;
      for(i=k;i<n;i++)
      {
          ll p=pices;
          if(a[i-k+1]>a[i-k] and a[i-k+2]<a[i-k+1])
          {
              p--;
          }
          if(a[i-1]>a[i-2] and a[i-1]>a[i])
          {
              p++;
          }
          if(p>ans)
          {
              ans=max(p,ans);
              l=i-k+2;
          }
          pices=p;
      }
      cout<<ans+1<<" "<<l<<endl;
   }
   return 0;
}
