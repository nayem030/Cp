#include<bits/stdc++.h>1
using namespace std;
typedef long long ll;
ll sum(ll n)
{
    if(n==1)
    {
        return 1;
    }
    return n+sum(n-1);
}
int main()
{
    ll n;
    cin>>n;
    ll ans=sum(n);
    cout<<ans<<endl;
    return 0;
}
