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
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        vector<pair<int,int>>v;
        for(int i=0; i<n; i++)
        {
            v.push_back({a[i],b[i]});
        }
        sort(v.begin(),v.end());
        int ans=k;
        for(auto it:v)
        {
            if(it.first<=ans)
            {
                ans+=it.second;
            }
            else
            {
                break;
            }
        }
        cout<<ans<<endl;
    }
}
