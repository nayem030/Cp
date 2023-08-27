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
        string s;
        cin>>s;
        vector<ll>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll ans=0;
        for(int i=n-1;i>=0;)
        {
            if(s[i]=='1')
            {
                ll mn=a[i];
                while(i>=0)
                {
                    mn=min(mn,a[i]);
                    if(s[i]=='1')
                    {
                        ans+=a[i];
                        i--;
                    }
                    else
                    {
                        ans+=a[i];
                        ans-=mn;
                        i--;
                        break;
                    }
                }
            }
            else
            {
                i--;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
