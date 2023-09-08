#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int ans=INT_MAX;
    for(int i=0;i<n+1;i++)
    {
        int curr=0;
        if(i)
        {
            curr=max(curr, a[i - 1] - 1);
        }
        if(i!=n)
        {
             curr = max(curr, 1000000 - a[i]);
        }
        ans=min(ans,curr);
    }
    cout<<ans<<endl;
    return 0;
}
