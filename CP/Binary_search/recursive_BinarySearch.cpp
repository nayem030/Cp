#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll binarySearch(ll l, ll r,vector<ll>a,ll n,ll k)
{
    if(r<l)
    {
        return -1;
    }
    ll mid=l+(r-l)/2;
    if(a[mid]==k)
    {
        return mid;
    }
    else if(a[mid]>k)
    {
        return binarySearch(l,mid-1,a,n,k);
    }
    else
    {
        return binarySearch(mid+1,r,a,n,k);
    }
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
    ll l=0, r=n-1;
    while(k--)
    {
        ll x;
        cin>>x;
        ll index=binarySearch(l,r,a,n,x);
        if(index==-1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}

