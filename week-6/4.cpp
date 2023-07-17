#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
        vector<int>diff;
        for(int i=1; i<n; i++)
        {
            diff.push_back(abs(a[i]-a[i-1]));
        }
        int ans=INT_MAX;
        ans=min(ans,diff[0]);
        ans=min(ans,diff[diff.size()-1]);
        for(int i=1; i<n-2; i++)
        {
            int max_diff=max(diff[i-1],diff[i]);
            ans=min(ans,max_diff);
        }
        cout<<ans<<endl;

    }
}
