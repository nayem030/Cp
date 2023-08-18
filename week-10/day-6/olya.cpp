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
        vector<int>b;
        for(int i=0; i<n; i++)
        {
            int m;
            cin>>m;
            vector<int>v(m);
            for(int j=0; j<m; j++)
            {
                cin>>v[j];
            }
            sort(v.begin(),v.end());
            a.push_back(v[0]);
            b.push_back(v[1]);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        ll ans=0;
        for(int i=n-1; i>=1; i--)
        {
            ans+=b[i];
        }
        ans+=a[0];
        cout<<ans<<endl;
    }
    return 0;
}
