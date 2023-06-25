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
        int n,k;
        cin>>n>>k;
        vector<int>ar(n);
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        map<int,vector<int>>mp;
        for(int i=0;i<n;i++)
        {
            mp[ar[i]].push_back(i);
        }
        while(k--)
        {
            int a,b;
            cin>>a>>b;
            if(mp[a].empty() || mp[b].empty())
            {
                cout<<"NO"<<endl;
                continue;
            }
            if(a==b)
            {
                cout<<"YES"<<endl;
                continue;
            }
            if(mp[a].front()<mp[b].back())
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
