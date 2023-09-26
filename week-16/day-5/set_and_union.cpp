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
      vector<int>a[n];
      vector<int>num;
      for(int i=0;i<n;i++)
      {
          int k;
          cin>>k;
          a[i].resize(k);
          for(int j=0;j<k;j++)
          {
              cin>>a[i][j];
              num.push_back(a[i][j]);
          }
      }
      sort(num.begin(),num.end());
      num.erase(unique(num.begin(),num.end()),num.end());
      int ans=0;
      for(int ex=1;ex<=50;ex++)
      {
          vector<int>temp;
          for(int i=0;i<n;i++)
          {
              bool f=false;
              for(int j=0;j<a[i].size();j++)
              {
                  if(a[i][j]==ex)
                  {
                      f=true;
                      break;
                  }
              }
              if(!f)
              {
                  for(int j=0;j<a[i].size();j++)
                  {
                      temp.push_back(a[i][j]);
                  }
              }
          }
          sort(temp.begin(),temp.end());
          temp.erase(unique(temp.begin(),temp.end()),temp.end());
          if(temp!=num)
          {
              ans=max(ans,(int)temp.size());
          }

      }
      cout<<ans<<endl;
   }
   return 0;
}
