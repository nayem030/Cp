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


        ll k=0;
        for(ll i=0; i<n-1; i++)
        {
            for(ll j=0; j<n; j++)
            {
                if(j==k||j==k+1)cout<<1<<" ";
                else cout<<0<<" ";

            }
            k++;
            cout<<endl;
        }

        for(ll i=0; i<n; i++)
        {
            if(i==0||i==n-1)cout<<1<<" ";
            else cout<<0<<" ";
        }
        cout<<endl;
    }
    return 0;
}
