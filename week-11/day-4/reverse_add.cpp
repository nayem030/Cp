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
        ll n;
        cin>>n;
        string x=to_string(n);
        reverse(x.begin(),x.end());
        ll p=stoi(x);
        ll cnt=0;
        while(p!=n)
        {
            cnt++;
            n+=p;
            x=to_string(n);
            reverse(x.begin(),x.end());
            p=stoi(x);
        }
        cout<<cnt<<" "<<n<<endl;
    }
    return 0;
}

