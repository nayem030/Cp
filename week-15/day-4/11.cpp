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
      string s;
      cin>>s;
      int a=0;
      if(s[0]!='a')
      {
          a++;
      }
      if(s[1]!='b')
      {
          a++;
      }
      if(s[2]!='c')
      {
          a++;
      }
      if(a==3)
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
