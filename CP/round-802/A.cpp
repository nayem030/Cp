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
        ll n,m;
        cin>>n>>m;
        ll ans=(m*(m+1))/2;
        if(n%2==0)
        {
            ans-=m;
            ans+=(n/2)*(2*m+((n-1)*m));
            cout<<ans<<endl;

        }
        else
        {
            ll d=m;
            m+=m;
            n-=1;
            ans+=(n/2)*(2*m+(n-1)*d);
            cout<<ans<<endl;
        }
    }
    return 0;
}
