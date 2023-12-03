#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        k--;
        ll ans;
        if(n%2==0)
        {
            ans=k%n;
        }
        else
        {
            ll mid=n/2;
            ans=((k/mid)+k)%n;
        }
        cout<<ans+1<<endl;
    }
    return 0;
}
