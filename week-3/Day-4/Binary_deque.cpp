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
        int n,s;
        cin>>n>>s;
        vector<int>ar(n);
        int sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            sum+=ar[i];
        }
        if(s>sum)
        {
            cout<<-1<<endl;
            continue;
        }
        else
        {
            unordered_map<int,int>mp;
            int j=0;
            int ans=0;
            int sum1=0;
            while(j<n)
            {
                sum1+=ar[j];
                if(sum1==s)
                {
                    ans=max(ans,j+1);

                }
                if(mp.find(sum1-s)!=mp.end())
                {
                    int index=mp[sum1-s];
                    ans=max(ans,j-index);
                }
                if(mp.find(sum1)==mp.end())
                {
                    mp[sum1]=j;
                }
                j++;
            }
            cout<<n-ans<<endl;
        }

    }
}
