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
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
      }
    int ans=1;
    for(int i=0;i<n;i++)
    {
        if(ans==a[i])
        {
            ans++;
        }
        ans++;
    }
    ans--;
    cout<<ans<<endl;
   }
   return 0;
}
