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
      ll n,k,x;
      cin>>n>>k>>x;
      ll v1=(n*(n+1))/2;
      ll v2=(k*(k+1))/2;
      ll v3=(n-k+1+n)*k/2;
      if(v2>x || v3<x)
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
