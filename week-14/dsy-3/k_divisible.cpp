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
        ll n,k;
        cin>>n>>k;
        if(n==k)
        {
            cout<<1<<endl;
        }
        else if(n<k)
        {
            ll v=k/n;
            if(k%n)
                v++;
            cout<<v<<endl;
        }
        else
        {
            if(n%k==0)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<2<<endl;
            }
        }
    }
    return 0;
}
