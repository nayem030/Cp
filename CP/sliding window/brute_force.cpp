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
      vector<int>a(n);
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
      }
      int ans=INT_MIN;
      for(int i=0;i<=n-k;i++)
      {
          int s=0;
          for(int j=i;j<k+i;j++)
          {
              s+=a[j];
          }
          ans=max(ans,s);
      }
      cout<<ans<<endl;

   }
   return 0;
}
