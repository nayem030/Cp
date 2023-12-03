#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        string s;
        cin>>n>>s;
        ll ans=0;
        set<int>z;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                z.insert(i);
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='1')
            {
                if(ans==-1 || !z.size())
                {
                    ans=-1;
                }
                else
                {
                    ans+=i-*z.rbegin();
                    s[*z.rbegin()]='1';
                    z.erase(--z.end());
                }
            }
            else if(z.size() and *z.rbegin()==i)
            {
                z.erase(i);
            }
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    return 0;
}
