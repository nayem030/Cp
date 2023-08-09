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
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        ll cnt=0;
        ll sum=0;
        if(n==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        for(ll i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                cnt++;

            }
            sum+=a[i];
        }
        sum-=n;
        if(sum>=cnt)
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

