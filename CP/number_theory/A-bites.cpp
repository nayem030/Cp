#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll gcd=a[0];
        for(ll i=1;i<n;i++)
        {
            gcd=__gcd(a[i],gcd);
        }
        if(gcd==1)
        {
            cout<<0<<endl;
            continue;
        }
        ll ans=LONG_LONG_MAX;
        for(ll i=0;i<n;i++)
        {
            ll tem=a[i];
            a[i]=__gcd(a[i],i+1);
            ll g=a[0];
            for(ll j=1;j<n;j++)
            {
                g=__gcd(g,a[j]);
            }
            if(g==1)
            {
                ans=min(ans,n-i);
            }
            a[i]=tem;
        }
        for(ll i=0;i<n;i++)
        {
            ll tem=a[i];
            a[i]=__gcd(a[i],i+1);
            for(ll j=i+1;j<n;j++)
            {
                ll tem2=a[j];
                a[j]=__gcd(a[j],j+1);
                ll g=a[0];
                for(ll k=1;k<n;k++)
                {
                    g=__gcd(a[k],g);
                }
                if(g==1)
                {
                    ans=min(ans,n-i+n-j);
                }
                a[j]=tem2;
            }
            a[i]=tem;
        }
        cout<<ans<<endl;
    }
    return 0;

}

