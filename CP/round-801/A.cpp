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
        ll a,b;
        ll mx=LLONG_MIN;
        ll ar[n+1][m+1];
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=m;j++)
            {
                cin>>ar[i][j];
                if(ar[i][j]>mx)
                {
                    mx=ar[i][j];
                    a=i;
                    b=j;
                }
            }
        }
        a=max(a,n-a+1);
        b=max(b,m-b+1);
        cout<<a*b<<endl;
    }
    return 0;
}
