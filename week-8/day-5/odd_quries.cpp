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
        int n,q;
        cin>>n>>q;
        vector<int>a(n+1,0);
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        vector<int>p(n+1,0);
        for (int i=1;i<=n ;i++ )
        {
             p[i]=p[i-1]+a[i];
        }
        while(q--)
        {
            int l,r,k;
            cin>>l>>r>>k;
            int sum=p[n];
            sum-=(p[r]-p[l-1]);
            sum+=((r-l+1)*k);
            if(sum&1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }

    }
    return 0;
}

