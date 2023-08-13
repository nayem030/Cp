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
        ll a ,b,c;
        cin>>a>>b>>c;
        ll value=a+2*b+c*3;
        if(a==b && b==c)
        {
            cout<<0<<endl;
        }
        else if(value &1)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}

