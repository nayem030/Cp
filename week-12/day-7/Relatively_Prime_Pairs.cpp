#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll l, r;
    cin>>l>>r;
    cout<<"YES"<<endl;
    for(ll i=l;i<r+1;i+=2)
    {
        cout<<i<<" "<<i+1<<endl;
    }
    return 0;
}
