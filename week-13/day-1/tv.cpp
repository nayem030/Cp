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
        int n,k,d;
        cin>>n>>k>>d;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        map<int,int>mp;
        int nm=0,cnt=0;
        for(int i=0;i<d;i++)
        {
            if(mp[a[i]]==0)
            {
                cnt++;
            }
            mp[a[i]]++;
        }
        nm=cnt;
        for(int i=d;i<n;i++)
        {
            mp[a[i-d]]--;
            if(mp[a[i-d]]==0)
            {
                cnt--;
            }
            if(mp[a[i]]==0)
            {
                cnt++;
            }
            mp[a[i]]++;
            nm=min(nm,cnt);
        }
        cout<<nm<<endl;
    }
    return 0;
}
