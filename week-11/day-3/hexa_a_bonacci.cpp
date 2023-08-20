#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e7+7;
ll a,b,c,d,e,f;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        ll n;
        cin>>a>>b>>c>>d>>e>>f>>n;
        vector<ll>ans(100005);
        ans[0]=a;
        ans[1]=b;
        ans[2]=c;
        ans[3]=d;
        ans[4]=e;
        ans[5]=f;
        for(ll i=6;i<=n;i++)
        {
            ans[i]=ans[i-1]+ans[i-2]+ans[i-3]+ans[i-4]+ans[i-5]+ans[i-6];
            ans[i]%=mod;
        }
        cout<<"Case "<<i<<": "<<ans[n]%mod<<endl;
    }
    return 0;
}

