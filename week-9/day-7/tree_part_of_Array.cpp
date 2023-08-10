#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    {
       cin>>a[i];
    }
    ll sum1=0,sum2=0;
    ll ans=0;
    ll l=0,r=n-1;
    while(l<=r)
    {
        if(sum1>sum2)
        {
            sum2+=a[r];
            r--;
        }
        else
        {
            sum1+=a[l];
            l++;
        }
        if(sum1==sum2)
        {
            ans=sum1;
        }
    }
    cout<<ans<<endl;
    return 0;
}

