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
      string ans="";
      int match_pair=0;
      int unmatch=0;
      int i=0,j=n-1;
      while(i<j)
      {
          if(s[i]==s[j])
          {
              match_pair+=2;
          }
          else
          {
              unmatch++;
          }
          i++;
          j--;
      }
      for(int i=0;i<=n;i++)
      {
          int total=i;
          total-=unmatch;
          if(total<0)
          {
              ans.push_back('0');
              continue;
          }
          total=max((total%2),total-match_pair);
          total=max(0,total-(n%2));
          if(total==0)
          {
              ans.push_back('1');
          }
          else
          {
              ans.push_back('0');
          }
      }
      cout<<ans<<endl;
   }
   return 0;
}
