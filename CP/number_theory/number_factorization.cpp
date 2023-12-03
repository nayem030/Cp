#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        map<ll,ll>m;
        ll sum=0;
        for(ll i=2;i*i<=n;i++)
        {
            ll cnt=0;
            while(n%i==0)
            {
                cnt++;
                n/=i;
                if(!m.count(cnt))
                {
                    m[cnt]=i;
                }
                else
                {
                    m[cnt]*=i;
                }
            }
        }
        if(n!=1)
        {
            if(!m.count(1))
            {
                m[1]=n;
            }
            else
            {
                m[1]*=n;
            }
        }
        for(auto it:m)
        {
            sum+=it.second;
        }
        cout<<sum<<endl;
    }
}
