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
       int n,k,x;
       cin>>n>>k>>x;
       if(k>n or k>x+1)
       {
           cout<<-1<<endl;
           continue;
       }
       int ans=0;
       for(int i=0;i<k;i++)
       {
           ans+=i;
           n--;
       }
       for(int i=0;i<n;i++)
       {
           if(k==x)
           {
               ans+=(x-1);
           }
           else
           {
               ans+=x;
           }

       }
       cout<<ans<<endl;

   }
   return 0;
}
