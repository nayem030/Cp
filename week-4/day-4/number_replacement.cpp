#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
          int n;
          cin>>n;
          vector<int>a(n);
          for(int i=0;i<n;i++)
          {
              cin>>a[i];
          }
          string s;
          cin>>s;
          map<int,set<char>>mp;
          for(int i=0;i<n;i++)
          {
              mp[a[i]].insert(s[i]);
          }
          bool b=true;
          for(auto x : mp)
          {
              if(x.second.size()>1)
              {
                  b=false;
              }
          }
          if(b)cout<<"YES"<<endl;
          else cout<<"NO"<<endl;
    }

    return 0;
}
