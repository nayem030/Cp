#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long>a(n);
        for(long long i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<long long>p(n);
        p[0]=a[0];
        for(long long i=1;i<n;i++)
        {
            p[i]=p[i-1]+a[i];
        }
        long long sum=p[n-1];
        long long ans=1;
        for(long long i=0;i<n-1;i++)
        {
            ans=max(__gcd(p[i],sum-p[i]),ans);
        }
        cout<<ans<<endl;
    }
    return 0;
}
