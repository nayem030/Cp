#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
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
        vector<int>a;
        for(int i=1;i<=n;i++)
        {
            a.push_back(i);
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            vector<int>v=a;
            reverse(v.begin()+i,v.end());
            int curr=0;
            int mx=0;
            for(int j=0;j<n;j++)
            {
                curr+=v[j]*(j+1);
                mx=max(mx,v[j]*(j+1));
            }
            ans=max(ans,curr-mx);
        }
        cout<<ans<<endl;
    }
    return 0;
}

