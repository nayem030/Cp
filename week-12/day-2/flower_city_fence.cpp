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
        vector<ll>a(n+1,0);
        for(ll i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        if(a[1]!=n)
        {
            cout<<"NO"<<endl;
            continue;
        }
        vector<ll>ans(n+1,0);
        for(ll i=1;i<=n;i++)
        {
            ans[a[i]]++;
        }
        for(ll i=n-1;i>=1;i--)
        {
            ans[i]+=ans[i+1];
        }
        if(ans==a)
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
