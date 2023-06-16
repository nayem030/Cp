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
        map<int,int>mp;
        set<int>s;
        for(int i=0;i<n;i++)
        {
            int in;
            cin>>in;
            s.insert(in);
            mp[in]++;
        }
        int ans=-1;
        for(int it:s)
        {
            if(mp[it]>=3)
            {
                ans=it;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
