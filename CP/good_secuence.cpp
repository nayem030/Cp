#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    vector<long long>a(n);
    map<long long,long long>m;
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }
    long long ans=0;
    for(auto it:m)
    {
        if(it.first==it.second)
        {
            continue;
        }
        else
        {
            if(it.second>it.first)
            {
                ans+=(it.second-it.first);
            }
            else
            {
                ans+=it.second;
            }
        }
    }
    cout<<ans<<endl;

}
