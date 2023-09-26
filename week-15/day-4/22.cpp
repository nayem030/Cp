#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>a(n);
        ll ans=1;
        bool f=false;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            ans*=a[i];
            if(a[i]==0)
            {
                f=true;
            }
        }

        if(f)
        {
            for(ll i=0; i<n; i++)
            {
                if(a[i]==0)
                {
                    a[i]+=1;
                    break;
                }
            }
            ans=1;
            for(ll i=0; i<n; i++)
            {
                ans*=a[i];
            }
            cout<<ans<<endl;
        }
        else
        {
            vector<ll>v;
            for(ll i=0;i<n;i++)
            {
                ll value=ans/a[i];
                value*=(a[i]+1);
                v.push_back(value);
            }
            ans=1;
            ans=*max_element(v.begin(),v.end());
            cout<<ans<<endl;
        }

    }


}
