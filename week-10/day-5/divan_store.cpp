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
        int n,l,r,k;
        cin>>n>>l>>r>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>=l and a[i]<=r)
            {
                if(a[i]<=k)
                {
                    ans++;
                    k-=a[i];
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

