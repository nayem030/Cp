#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
bool is_possbile(ll mid,ll n,ll x,ll y)
{
    if(mid<min(x,y))
    {
        return false;
    }
    ll cnt=1;
    mid-=min(x,y);
    cnt+=mid/x+mid/y;
    return cnt>=n;
}
int main()
{
   ll n,x,y;
   cin>>n>>x>>y;
   ll l=0,r=max(x,y)*n,mid;
   while(l+1<r)
   {
       mid=l+(r-l)/2;
       if(is_possbile(mid,n,x,y))
       {
           r=mid;
       }
       else
       {
           l=mid;
       }
   }
   cout<<r<<endl;
   return 0;
}
