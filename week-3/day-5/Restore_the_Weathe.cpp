#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>>ar(n);
        for(int i=0; i<n; i++)
        {
            cin>>ar[i].first;
            ar[i].second=i;
        }
        sort(ar.begin(),ar.end());
        vector<int> b(n);
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        sort(b.begin(),b.end());
        vector<int> ans(n);
        for(int i=0;i<n;i++)
        {
            ans[ar[i].second]=b[i];
        }
        for(auto it: ans)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
}
