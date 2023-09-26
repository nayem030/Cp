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
      int a1,a2,b1,b2;
      cin>>a1>>a2>>b1>>b2;
      int av=a1-a2;
      int bv=b1-b2;
      int l=av+bv;
      if(l>=0)
      {
          cout<<"NO"<<endl;
      }
      else
      {
          cout<<"YES"<<endl;
      }
   }
   return 0;
}
