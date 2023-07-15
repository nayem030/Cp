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
        vector<int>a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        vector<int>diff(n-1);
        for(int i=0; i<n-1; i++)
        {
            diff[i]=abs(a[i+1]-a[i]);
        }
        int ans=INT_MAX;
        ans=min(ans,diff[0]);
        ans=min(ans,diff[n-2]);
        for(int i=1; i<n-2; i++)
        {
            int max_diff=max(diff[i-1],diff[i]);
            ans=min(ans,max_diff);
        }
        cout<<ans<<endl;

    }
}
