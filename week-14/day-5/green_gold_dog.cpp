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
        vector<int>a(n+1);
        vector<pair<int,int>>p;
        for(int i=1; i<=n; i++)
        {
            int x;
            cin>>x;
            a[i]=x;
            p.push_back({x,i});
        }
        sort(p.begin(),p.end());
        reverse(p.begin(),p.end());
        vector<int>ans(n+1,0);
        for(int i=0; i<n; i++)
        {
            ans[p[i].second]=i+1;
        }
        for(int i=1; i<=n; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}
