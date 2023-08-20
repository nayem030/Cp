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
           ll n;
           cin>>n;
           vector<ll>a(n);
           for(int i=0;i<n;i++)
           {
               cin>>a[i];
           }
           vector<ll>cnt(32,0);
           for(int i=0;i<32;i++)
           {
               for(int j=0;j<n;j++)
               {
                   if(a[j] & (1<<i))
                   {
                       cnt[i]++;
                   }
               }
           }
           vector<ll>ans;
           for(int i=1;i<=n;i++)
           {
               bool ok=true;
               for(int j=0;j<32;j++)
               {
                   if(cnt[j]%i!=0)
                   {
                       ok=false;
                       break;
                   }
               }
               if(ok)
               {
                   ans.push_back(i);
               }
           }
           for(auto it:ans)
           {
               cout<<it<<" ";
           }
           cout<<endl;
    }
    return 0;
}

