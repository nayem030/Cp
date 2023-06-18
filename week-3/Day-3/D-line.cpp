#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  long long t;
  cin>>t;
  while(t--)
  {
      long long n;
      cin>>n;
      string s;
      cin>>s;
      vector<int>v;
      long long total=0;
      int miniChange=0;
      for(long long i=0;i<n;i++)
      {
          long long L=i;
          long long R=n-i-1;
          if(s[i]=='L')
          {
              if(L<R)
              {
                  miniChange++;
                  total+=R;
                  v.push_back(R-L);
              }
              else
              {
                  total+=L;
              }
          }
          else
          {
              if(L>R)
              {
                  miniChange++;
                  total+=L;
                  v.push_back(L-R);
              }
              else
              {
                  total+=R;
              }


          }
      }
      vector<long long>ans(n);
      for(long long i=miniChange-1;i<n;i++)
      {
          ans[i]=total;
      }
      sort(v.begin(),v.end(),greater<long long>());
      for(long long i=miniChange-2;i>=0;i--)
      {
          total-=v.back();
          v.pop_back();
          ans[i]=total;
      }
      for(long long i=0;i<n;i++)
      {
          cout<<ans[i]<<" ";
      }
      cout<<'\n';
  }
}
