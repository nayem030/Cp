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
      map<int,int>mp;
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
          mp[a[i]]++;
      }
      if(mp[k]==0)
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
