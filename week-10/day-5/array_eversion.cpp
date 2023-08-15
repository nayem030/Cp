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
        vector<int>a(n);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int mx=*max_element(a.begin(),a.end());
        if(a[n-1]==mx)
        {
            cout<<0<<endl;
        }
        else
        {
            int v=a[n-1];
            for(int i=n-2;i>=0;i--)
            {
                if(v<a[i])
                {
                    ans++;
                    v=a[i];
                }
                if(v==mx)
                {
                    break;
                }
            }
             cout<<ans<<endl;
        }

    }
    return 0;
}

