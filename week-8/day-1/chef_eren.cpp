#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            if(i&1)
            {
                ans+=b;
            }
            else
            {
                ans+=a;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

