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
        vector<ll>a;
        vector<ll>b;
        for(int i=0; i<n; i++)
        {
            ll x;
            cin>>x;
            ll cnt=1;
            a.push_back(x);
            while(x%k==0)
            {
                x/=k;
                cnt++;
            }
            b.push_back(cnt);
        }
        ll index=0, m=INT_MAX;
        for(ll i=0; i<n; i++)
        {
            if(b[i]<m)
            {
                m=b[i];
                index=i;
            }
        }
        ll sum=0;
        for(ll i=index; i<n; i++)
            sum+=m*a[i];
        for(ll i=index-1; i>=0; i--)
            sum+=(m+1)*a[i];

        cout<<sum<<endl;

    }
    return 0;
}
