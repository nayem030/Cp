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
      vector<ll>a;
      a.push_back(1);
      for(ll i=1;i<n;i++)
      {
         a.push_back(a[i-1]+2);
      }
      for(auto it:a)
      {
          cout<<it<<" ";
      }
      cout<<endl;
   }N
   return 0;
}
