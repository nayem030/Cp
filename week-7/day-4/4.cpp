#include<bits/stdc++.h>
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
        long long n,m;
        cin>>n>>m;
        long long ans=0;
        for(long long i=m;i<=n;i=i+m)
        {
            ans=ans+(i%10);
        }
        cout<<ans<<endl;
    }
    return 0;
}


