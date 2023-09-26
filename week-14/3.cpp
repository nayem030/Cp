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
      if(n==2 or n==3)
      {
          cout<<-1<<endl;
          continue;
      }
      vector<int>a(n);
      for(int i=0;i<n;i++)
      {
          a[i]=i+1;
      }
      for(int i=0;i<n-2;i++)
      {
          if(i%4<=1)
          {
              swap(a[i],a[i+2]);
          }
      }
      if(n%4==2)
      {
          swap(a[n-4],a[n-2]);
          swap(a[n-3],a[n-1]);
          swap(a[n-2],a[n-1]);
      }
      if(n%4==3)
      {
          swap(a[n-5],a[n-2]);
          swap(a[n-5],a[n-4]);
          swap(a[n-5],a[n-1]);
      }
      if(n%4==1)
      {
          swap(a[n-3],a[n-1]);
          swap(a[n-1],a[n-2]);
      }
      for(auto it:a)
      {
          cout<<it<<" ";
      }
      cout<<endl;

   }
   return 0;
}
