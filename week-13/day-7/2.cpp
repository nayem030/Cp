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
          for(ll i=l;i<=r;i++)
          {
              if(i%2==0)
              {
                  a=2;
                  b=i-2;
                  break;
              }
          }
          cout<<a<<" "<<b<<endl;

    }
    return 0;
}
