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
        int ans=1;
        while(ans<=n)
        {
            ans=ans*2;
        }
        ans=ans/2;
        ans--;
        cout<<ans<<endl;
   }

   return 0;
}

