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
       vector<int>b(n);
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
       for(int i=0;i<n;i++)
       {
           cin>>b[i];
       }
       for(int i=0;i<n;i++)
       {
           a[i]=b[i]-a[i];
       }
       sort(a.begin(),a.end(),greater<int>());
       int i=0,j=n-1;
       int ans=0;
       while(i<j)
       {
           if(a[i]+a[j]>=0)
           {
               ans++;
               i++;
               j--;
           }
           else
           {
               j--;
           }
       }
       cout<<ans<<endl;
    }
    return 0;
}
