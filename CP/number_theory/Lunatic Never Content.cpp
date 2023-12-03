#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int ans=0;
        if(n&1)
        {
            for(int i=0; i<=n/2; i++)
            {
                if(n&1)
                {
                    ans=__gcd(ans,abs(a[i]-a[n-i-1]));
                }

            }
        }
        else
        {
            for(int i=0; i<n/2; i++)
            {


                    ans=__gcd(ans,abs(a[i]-a[n-i-1]));


            }
        }
        cout<<ans<<endl;

    }
}
