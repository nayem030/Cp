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
        ll a,b;
        ll ans=0;
        cin>>a>>b;
        if(a==0)
        {
            cout<<0<<endl;
            continue;
        }
        ans=a+3;
        for(ll i=(b<2?2-b:0);i<ans;i++)
        {
            ll c=b+i;
            ll d=a;
            ll value=i;
            while(d)
            {
                d/=c;
                value++;
            }
            if(value<ans)
            {
                ans=value;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
