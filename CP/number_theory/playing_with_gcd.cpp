#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
ll lcm(ll a ,ll b)
{
    return (a*b)/__gcd(a,b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
         ll n;
         cin>>n;
         vector<ll>a(n);
         for(ll i=0;i<n;i++)
         {
             cin>>a[i];
         }
         vector<ll>b(n+1);
         b[0]=a[0];
         b[n]=a[n-1];
         for(ll i=1;i<n;i++)
         {
             b[i]=lcm(a[i-1],a[i]);
         }
         bool ans=true;
         for(ll i=0;i<n;i++)
         {
             if(__gcd(b[i],b[i+1])!=a[i])
             {
                 ans=false;
                 break;
             }
         }
         if(ans)
            cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;
    }
    return 0;

}

