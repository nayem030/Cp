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
        int n;
        cin>>n;
        vector<int>a(n);
        map<int,int>mp;
        vector<int>ans(n+1,0);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<=n)
            {
                mp[a[i]]++;
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(mp[i]==0)
            {
                continue;
            }
            for(int j=i;j<=n;j+=i)
            {
                ans[j]+=mp[i];
            }
        }
        int mx=*max_element(ans.begin(),ans.end());
        cout<<mx<<endl;
    }
}
