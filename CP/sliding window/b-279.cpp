#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,t;
    cin>>n>>t;
    vector<int>a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll i=0,j=0;
    ll ans=0;
    ll sum=0;
    while(j<n)
    {
        sum+=a[j];
        if(sum>t)
        {
            while(sum>t)
            {
                sum-=a[i];
                i++;
            }
        }
        if(t>=sum)
        {
            ans=max(ans,j-i+1);
        }
        j++;
    }
    cout<<ans<<endl;
}
