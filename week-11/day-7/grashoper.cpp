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
        int x,k;
        cin>>x>>k;
        if(k>x)
        {
            cout<<1<<endl;
            cout<<x<<endl;
        }
        else if(x%k!=0)
        {
            cout<<1<<endl;
            cout<<x<<endl;
        }
        else
        {
            cout<<2<<endl;
            cout<<x-1<<" "<<1<<endl;
        }
    }
    return 0;
}
