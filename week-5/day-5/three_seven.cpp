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
        int m;
        cin>>m;
        map<int,int>mp;
        int j=1;
        while(j<=m)
        {
            int n;
            cin>>n;
            for(int i=0; i<n; i++)
            {
                int x;
                cin>>x;
                mp[x]=j;
            }
            j++;
        }
        vector<int>ans(m+1,-1);
        for(auto it: mp)
        {
            if(ans[it.second]==-1)
            {
                ans[it.second]=it.first;
            }
        }
        bool ok=false;
        for(int i=1; i<=m; i++)
        {
            if(ans[i]==-1)
            {
                ok=true;
                break;
            }
        }
        if(ok)
        {
            cout<<-1<<endl;
        }
        else
        {
            for(int i=1;i<=m;i++)
            {
                cout<<ans[i]<<" ";
            }
        }
        cout<<endl;
    }
}
