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
      vector<int>a(n);
      map<int,int>mp;
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
          mp[a[i]]++;
      }
      if(mp.size()==1)
      {
          cout<<"NO"<<endl;
          continue;
      }
      cout<<"YES"<<endl;
      int v=0;
      for(int i=1;i<n;i++)
      {
          if(a[0]!=a[i])
          {
              v=i;
              break;
          }
      }
      for(int i=1;i<n;i++)
      {
          if(a[i]!=a[0])
          {
              cout<<1<<" "<<i+1<<endl;
          }
          else
          {
              cout<<v+1<<" "<<i+1<<endl;
          }
      }
   }
   return 0;
}
