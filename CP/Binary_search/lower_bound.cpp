#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
    ll index=-1;
    ll LowerBound=0;
    while(l<=r)
    {
        ll mid=l+(r-l)/2;
        if(a[mid]<k)
        {
            l=mid+1;
        }
        else if(a[mid]>=k)
        {
            r=mid-1;
            LowerBound=mid;
            cout<<a[mid]<<" "<<mid<<endl;
        }
    }
    cout<<LowerBound<<endl;
}


