#include<bits/stdc++.h>
using namespace std;
const int  mod=1e9+7;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        int zero_cnt=0,one_cnt=0;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            if(x==1)
            {
                one_cnt++;
            }
            if(x==0)
            {
                zero_cnt++;
            }
        }
        ll ans=one_cnt;
        for(ll i=1;i<=zero_cnt;i++)
        {
            ans*=2;
        }
        cout<<ans<<endl;
    }
    return 0;
}

