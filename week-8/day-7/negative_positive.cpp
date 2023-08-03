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
        int n;
        cin>>n;
        vector<ll>a(n);
        ll neg=0,m=LLONG_MAX,ans=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<0)
            {
                neg++;
            }
            ans+=abs(a[i]);
            m=min(m,abs(a[i]));
        }
        if(neg%2==1)
        {
            ans-=(2LL*m);
        }
        cout<<ans<<endl;
    }
    return 0;
}

