#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
ll sum(ll n)
{
    return (n*(n+1))/2;
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
        ll n,x,y;
        cin>>n>>x>>y;
        ll a=n/x;
        ll b=n/y;
        ll lcm=(x*y)/__gcd(x,y);
        ll c=n/lcm;
        a-=c;
        b-=c;
        cout<<sum(n)-sum(n-a)-sum(b)<<endl;
    }
    return 0;
}
