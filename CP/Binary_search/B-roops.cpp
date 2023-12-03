#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool prb(vector<ll>&a , ll k, double mid)
{
    if(mid==0)
    {
        return true;
    }
    ll cnt=0;
    for(ll i=0;i<a.size();i++)
    {
        cnt+=a[i]/mid;
    }
    if(cnt>=k)
        return true;
    else
        return false;
}
int main()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    double l=0,r=1e8,mid;
    int p=100;
    cout<<setprecision(7);
    while(p--)
    {
        mid=l+(r-l)/2;
        if(prb(a,k,mid))
        {
            l=mid;
        }
        else
        {
            r=mid;
        }
    }
    cout<<l<<endl;
    return 0;
}
