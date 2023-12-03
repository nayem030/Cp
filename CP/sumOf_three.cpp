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
      cin>>n;
      if(n<=6)
      {
          cout<<"NO"<<endl;
          continue;
      }
      if(n==9)
      {
          cout<<"NO"<<endl;
          continue;
      }
      if((n-5)%3==0)
      {
          cout<<"YES"<<endl;
          cout<<1<<" "<<2<<" "<<n-3<<endl;
      }
      else
      {
          cout<<"YES"<<endl;
          cout<<1<<" "<<4<<" "<<n-5<<endl;
      }
   }
   return 0;
}
