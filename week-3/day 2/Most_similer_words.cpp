#include<bits/stdc++.h>
using namespace std;
int value(string &s,string &t)
{
    int ans=0;
    for(int i=0;i<s.size();i++)
    {
        ans+=abs(s[i]-t[i]);
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<string>s(n);
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        int ans=1e5+5;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int ans2=value(s[i],s[j]);
                ans=min(ans,ans2);
            }
        }
        cout<<ans<<endl;
    }
}
