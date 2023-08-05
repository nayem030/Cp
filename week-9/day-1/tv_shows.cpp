#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    map<int,long long>mp;
    while(t--)
    {
       int m,n;
       cin>>m>>n;
       mp[m]++;
       mp[n+1]--;

    }
    ll sum=0;
    ll ans=0;
    for(auto it:mp)
    {
        sum+=it.second;
        ans=max(ans,sum);
    }
    if(ans>2)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    return 0;
}

