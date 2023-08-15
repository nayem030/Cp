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
           vector<int>a(n+1,0);
           vector<int>d(n+1,0);
           for(int i=1;i<=n;i++)
           {
               a[i]=i;
           }
           for(int i=1;i<=n;i++)
           {
               d[i]=__gcd(a[i],a[(i%n)+1]);
           }
           for(int i=1;i<=n;i++)
           {
               cout<<a[i]<<" ";
           }
           cout<<endl;
           for(auto it:d)
           {
               cout<<it<<" ";
           }


    }
    return 0;
}

