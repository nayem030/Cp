#include<bits/stdc++.h>
using namespace std;
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
     int ans=1;
      int a,b;
      cin>>a>>b;
      int mx=INT_MIN;
      if(a<=10)
      {
          mx=max(mx,b);
      }
      for(int i=2;i<=n;i++)
      {
          cin>>a>>b;
          if(a<=10 && mx<b)
          {
              mx=b;
              ans=i;
          }

      }
      cout<<ans<<endl;
   }

   return 0;
}
