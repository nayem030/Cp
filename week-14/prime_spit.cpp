#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
bool is_prime(ll n)
{
    if(n<2)
    {
        return false;
    }
    if(n==2)
    {
        return true;
    }
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
ll get_divisible(ll n)
{
    if(n%2==0)
    {
        return 2;
    }
    for(ll i=3;i*i<=n;i+=2)
    {
        if(n%i==0)
        {
            return i;
        }
    }
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
          ll l,r;
          cin>>l>>r;
          ll a,b;
          if(r<=3 || (l==r and is_prime(l)))
          {
              cout<<-1<<endl;
              continue;
          }
          if(l==r)
          {
              ll prime=get_divisible(l);
              cout<<prime<<" "<<l-prime<<endl;
              continue;
          }
          if(r%2==0)
          {
              cout<<2<<" "<<r-2<<endl;
          }
          else
          {
              r--;
              cout<<2<<" "<<r-2<<endl;
          }

    }
    return 0;
}
