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
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll x=a*d;
        ll y=b*c;
        if(x==y)
        {
            cout<<0<<endl;
        }
        else if(x==0 or y==0)
        {
            cout<<1<<endl;
        }
        else if(x%y==0 or y%x==0)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
    }
    return 0;

}

