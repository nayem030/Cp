#include<bits/stdc++.h>
using namespace std;
const int  mod=1e9+7;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
       int l,m,n;
       cin>>l>>m>>n;
       ll v=l+m+n;
       if(v%3==0)
       {
           cout<<0<<endl;
       }
       else
       {
           cout<<1<<endl;
       }
    }
    return 0;
}

