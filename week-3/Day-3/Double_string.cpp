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
        vector<string>ar(n);
        map<string ,bool>mp;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            mp[ar[i]]=true;
        }
        for(int i=0;i<n;i++)
        {
            int ans=0;
            for(int j=0;j<ar[i].size();j++)
            {
               string p1=ar[i].substr(0,j);
               string p2=ar[i].substr(j,ar[i].size()-j);
               if(mp[p1]&&mp[p2])
               {
                   ans=1;
               }
            }
            cout<<ans;
        }
        cout<<endl;

    }
}
