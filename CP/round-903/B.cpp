#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      ll n;
      string s;
      cin>>n>>s;
      ll ans=n;
      for(ll i=1;i<n;i++)
      {
          if(s[i]!=s[i-1])
          {
              ans+=i;
          }
      }
      cout<<ans<<endl;
   }
   return 0;
}
