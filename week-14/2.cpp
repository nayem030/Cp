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
      int n;
      cin>>n;
      string s;
      cin>>s;
      for(int i=0;i<n;)
      {
          if(s[i]=='1')
          {
              if(i+2<n)
              {
                  s[i+1]='0';
                  s[i+2]='0';
              }
              i+=3;
          }
          else
          {
              i++;
          }
      }
      cout<<s<<endl;
   }
   return 0;
}
