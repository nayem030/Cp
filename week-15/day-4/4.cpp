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
      int n,k;
      cin>>n>>k;
      string s;
      cin>>s;
      int ans=0;
      for(int i=0;i<n;i++)
      {
          if(s[i]=='W')
          {
              continue;
          }
          else
          {
              ans++;
              i+=k;
              i--;
          }
      }
      cout<<ans<<endl;
   }
   return 0;
}
