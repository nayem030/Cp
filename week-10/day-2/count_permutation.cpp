#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
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
       long long n;
        cin>>n;
        long long ans=1;
        n=n+n;
        if(n==1)
        {
            cout<<1<<endl;
            continue;
        }
        for(long long i=3;i<=n;i++)
        {
            ans*=i;
            ans%=mod;
        }
      cout<<ans<<endl;
    }
}
