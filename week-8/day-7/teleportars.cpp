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
        ll c;
        cin>>c;
        int ans=0;
        vector<ll>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            a[i]+=i+1;
        }
        sort(a.begin(),a.end());
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            if(sum+a[i]>c)
            {
                break;
            }
            else
            {
                sum+=a[i];
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

