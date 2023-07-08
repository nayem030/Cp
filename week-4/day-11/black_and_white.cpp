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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int i,W_cnt=0;
        int ans=INT_MAX;
        for(i=0;i<k;i++)
        {
            if(s[i]=='W')
            {
                W_cnt++;
            }
        }
        ans=W_cnt;
        for(i=k;i<n;i++)
        {
            if(s[i]=='W')
            {
                W_cnt++;
            }
            if(s[i-k]=='W')
            {
                W_cnt--;
            }
            ans=min(ans,W_cnt);
        }
        cout<<ans<<endl;
    }

}
