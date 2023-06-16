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
        set<int>s;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int in;
            cin>>in;
            s.insert(in);
            mp[in]++;
        }
        int ans=-1;
        for(auto it :s)
        {
            if(mp[it]>=3)
            {
                ans=it;
            }
        }
        cout<<ans<<endl;
    }
}
