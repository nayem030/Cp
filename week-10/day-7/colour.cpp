#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
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
          map<int,int>mp;
          int ans=INT_MIN;
          for(int i=0;i<n;i++)
          {
              cin>>a[i];
              mp[a[i]]++;
          }
          for(auto it:mp)
          {
              ans=max(ans,it.second);
          }
          cout<<ans<<endl;

    }
    return 0;
}

