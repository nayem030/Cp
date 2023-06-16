#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<string,int>mp;
        string ar[3][n];
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>ar[i][j];
                mp[ar[i][j]]++;
            }
        }
        for(int i=0;i<3;i++)
        {
            int ans=0;
            for(int j=0;j<n;j++)
            {
               if(mp[ar[i][j]]==1)
               {
                   ans=ans+3;
               }
               else if(mp[ar[i][j]]==2)
               {
                   ans++;
               }
            }
            cout<<ans<<" ";
        }
        cout<<'\n';
    }
    return 0;
}
