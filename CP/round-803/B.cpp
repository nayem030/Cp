#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll>a(n);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll ans=0;
        for(ll i=1;i<n-1;i++)
        {
            if(a[i]>(a[i+1]+a[i-1]))
            {
                ans++;
            }
        }
        if(k==1)
        {
            ans=max(ans,(n-1)/2);
            cout<<ans<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }

    }
}
