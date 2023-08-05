#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
        vector<ll>a(n);
        ll distinct=0;
        map<ll,ll>mp;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            mp[a[i]]++;

        }
        distinct=mp.size();
        if(n==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        ll q=(n/2)+(n%2);
        if(q<distinct)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}

