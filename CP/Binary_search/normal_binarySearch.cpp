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
    while(l<=r)
    {
        ll mid=l+(r-l)/2;
        if(a[mid]==k)
        {
            index=mid;
            break;
        }
        else if(a[mid]>k)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout<<index<<endl;
}
