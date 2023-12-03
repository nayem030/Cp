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
      vector<ll>h(n);
      for(ll i=0;i<n;i++)
      {
          cin>>a[i];
      }
      for(ll i=0;i<n;i++)
      {
          cin>>h[i];
      }
      ll l=0,r=0,ans=0,prev=0,sum=0;
      while(r<n)
      {
          if(a[r]>k)
          {
              r++;
              l=r;
              prev=0;
              sum=0;
              continue;
          }

      }
   }
   return 0;
}
