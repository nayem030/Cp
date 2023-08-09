#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
           cin>>a[i];
           mp[a[i]]++;
        }
        sort(a.begin(),a.end());
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int x=a[i];

            if(mp[x]!=0)
            {
                ans++;
               while(mp[x]>0)
               {
                   mp[x]--;
                   x+=1;
               }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

