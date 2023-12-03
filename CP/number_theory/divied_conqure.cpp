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
        ll sum=0;
        vector<ll>a(n);
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        ll ans=LONG_LONG_MAX;
        if(sum&1)
        {
            for(ll i=0; i<n; i++)
            {

                if(a[i]%2==0)
                {
                    ll cnt=0;
                    ll x=a[i];
                    while(x%2==0 and x>0)
                    {
                        cnt++;
                        x/=2;
                    }
                    ans=min(ans,cnt);
                }

            }
            for(ll i=0; i<n; i++)
            {
                if(a[i]%2==1)
                {
                    ll cnt=0;
                    ll x=a[i];

                    while(x%2==1)
                    {
                        cnt++;
                        x/=2;
                    }
                    ans=min(ans,cnt);
                }

            }
        }
        else
        {
            ans=0;
        }
        cout<<ans<<endl;
    }
    return 0;

}
