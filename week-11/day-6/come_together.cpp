#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
ll Togther_walk(ll x, ll y, ll z)
{
    if(y>=x and z>=x)
    {
        return min(y-x,z-x);
    }
    if(y<=x and z<=x)
    {
        return min(x-z,x-y);
    }
    return 0;
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
        ll xa,ya;
        cin>>xa>>ya;
        ll xb,yb,xc,yc;
        cin>>xb>>yb;
        cin>>xc>>yc;
        ll ans=Togther_walk(xa,xb,xc)+Togther_walk(ya,yb,yc);
        ans++;
        cout<<ans<<endl;
    }
    return 0;
}
