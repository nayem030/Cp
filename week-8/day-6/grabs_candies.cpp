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
        ll n;
        cin>>n;
        ll m=0,g=0;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            if(x&1)
            {
                g+=x;
            }
            else
            {
                m+=x;
            }
        }
        if(m>g)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

