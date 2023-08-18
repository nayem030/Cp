#include<bits/stdc++.h>
const long long mod=1e9+7;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        long long ans=n;
        long long i=2;
        while(i<=k)
        {
            ans=ans*n;
            ans=ans%mod;
            i++;
        }
        cout<<ans<<endl;
    }

    return 0;
}
