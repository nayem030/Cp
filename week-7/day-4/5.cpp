#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;
    cin>>n;
    vector<long long>v(n);
    long long g=0;
    for(long long i=0; i<n; i++)
    {
        cin>>v[i];
        g = __gcd(g, v[i]);
    }
    long long ans=0;
    for(long long i=1; i*i<=g; i++)
    {
        if(g%i==0)
        {
            ans++;
            if(i!=g/i)
            {
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}

