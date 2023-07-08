#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;
    cin>>n;
    vector<long long>odd(n,0);
    vector<long long>even(n,0);
    for(long long i=1; i<=n;i++)
    {
        long long x;
        cin>>x;
        if(i%2!=0)
        {
            odd[i]=odd[i-1]+x;
            even[i]=even[i-1];
        }
        else
        {
            even[i]=even[i-1]+x;
            odd[i]=odd[i-1];
        }

    }
    long long ans=0;
    for(long long i=1;i<=n;i++)
    {
        if(odd[n]-odd[i]+even[i-1]==even[n]-even[i]+odd[i-1])
        {
            ans++;
        }
    }
    cout<<ans<<endl;

}
