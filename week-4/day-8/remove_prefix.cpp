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
        map<int,int>mp;
        vector<int>ar(n);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        for(int i=n-1;i>=0;i--)
        {
            mp[ar[i]]++;
            if(mp[ar[i]]==2)
            {
                ans=i+1;
                break;
            }
        }
        cout<<ans<<endl;
    }
}
