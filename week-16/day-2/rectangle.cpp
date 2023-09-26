#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
bool good(ll x,ll w,ll h, ll n)
{
    return (x/w)*(x/h)>=n;
}
int main()
{

      ll w,h,n;
      cin>>w>>h>>n;
      ll l=0;
      ll r=1;
      while(!good(r,w,h,n))
      {
          r*=2;
      }
      while(l+1<r)
      {
          ll m=(l+r)/2;
          if(good(m,w,h,n))
          {
              r=m;
          }
          else
          {
              l=m;
          }
      }
   cout<<r<<endl;
   return 0;
}
