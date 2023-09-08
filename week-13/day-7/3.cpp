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
        map<int ,int>mp;
        while(n--)
        {
            int d,s;
            cin>>d>>s;
            if(mp[d])
            {
                mp[d]=min(mp[d],s);
            }
            else
            {
                mp[d]=s;
            }
        }
        int i=0,mn=INT_MAX;
        while(mn>0)
        {
            i++;
            int v=0;
            if(mp.find(i)!=mp.end())
            {
                v=mp[i];
                mn=min(v,mn);
            }
            mn-=2;

        }
        cout<<i<<endl;
    }
    return 0;
}
