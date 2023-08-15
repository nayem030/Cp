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
         for(int i=0;i<n;i++)
         {
             cin>>a[i];
         }
         int ans=1;
         for(int i=0;i<n;i++)
         {
            if(i==0)
            {
                if(a[i]==1)
                {
                    ans++;
                }
                continue;
            }
            if(a[i]==1)
            {
                 if(a[i-1]==1)
                 {
                     ans+=5;
                 }
                 else
                 {
                     ans++;
                 }
            }
            else
            {
                if(a[i-1]==0)
                {
                    ans=-1;
                    break;
                }
            }
         }
         cout<<ans<<endl;
    }
    return 0;
}

