#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long ans=0,mx=0;
        bool prev=true;
        for(int i=0;i<n;i++)
        {
            long long a;
            cin>>a;
            if(a<0 && prev)
            {
                ans++;
                prev=false;
            }
            if(a>0)
            {
                prev=true;
            }
            mx+=abs(a);
        }
        cout<<mx<<" "<<ans<<endl;
    }
}
