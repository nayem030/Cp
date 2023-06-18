#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<string>v(n);
        map<char,long long>mp1;
        map<char,long long>mp2;
        map<string,long long>mp;
        for(long long i=0;i<n;i++)
        {
            cin>>v[i];
            mp1[v[i][0]]++;
            mp2[v[i][1]]++;
            mp[v[i]]++;

        }
        long long ans=0;
        for(long long i=0;i<n;i++)
        {
            long long x1=max((long long)0,mp1[v[i][0]]-mp[v[i]]);
            ans+=x1;
            long long x=max((long long)0,mp2[v[i][1]]-mp[v[i]]);
            ans+=x;
            if(mp1[v[i][0]]>0)mp1[v[i][0]]--;
            if(mp2[v[i][1]]>0)mp2[v[i][1]]--;
            if(mp[v[i]]>0)mp[v[i]]--;

        }
        cout<<ans<<endl;

    }
}
