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
      char a[10][10];
      vector<pair<int,int>>v;
      for(int i=0;i<10;i++)
      {
          for(int j=0;j<10;j++)
          {
              cin>>a[i][j];
              if(a[i][j]=='X')
              {
                  v.push_back({i+1,j+1});
              }
          }
      }
      int ans=0;
      int n=10;
      for(auto it:v)
      {
          if(it.first==1 or it.first==n or it.second==n or it.second==1)
          {
              ans+=1;
          }
          else if(it.first==2 or it.first==n-1 or it.second==n-1 or it.second==2)
          {
              ans+=2;
          }
          else if(it.first==3 or it.first==n-2 or it.second==n-2 or it.second==3)
          {
              ans+=3;
          }
          else if(it.first==4 or it.first==n-3 or it.second==n-3 or it.second==4)
          {
              ans+=4;
          }
          else
          {
              ans+=5;
          }

      }
      cout<<ans<<endl;
   }
   return 0;
}
