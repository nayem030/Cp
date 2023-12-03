#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(abs(a-b)==1)
        {
            cout<<1<<endl;
            cout<<a<<" "<<b<<endl;
            continue;
        }
        cout<<2<<endl;
        if(a+1LL>(ll)1e9)
        {
            cout<<a-1<<" "<<1<<endl;
            cout<<a<<" "<<b<<endl;
        }
        else
        {
            cout<<a+1<<" "<<1<<endl;
            cout<<a<<" "<<b<<endl;
        }

    }
    return 0;
}
