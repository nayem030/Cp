#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    unordered_map<int,int>mp;
    int j=0;
    int ans=0;
    int sum=0;
    while(j<n)
    {
        sum+=ar[j];
        if(sum==k)
        {
            ans=max(ans,j+1);

        }
        if(mp.find(sum-k)!=mp.end())
        {
            int index=mp[sum-k];
            ans=max(ans,j-index);
        }
        if(mp.find(sum)==mp.end())
        {
            mp[sum]=j;
        }
        j++;
    }
    cout<<ans;
    return 0;
}
