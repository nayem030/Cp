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
        int b,c,h;
        cin>>b>>c>>h;
        int ans=2;
        b-=2;
        int d=c+h;
        if(b==0)
        {
            ans++;
        }
        else if(d>b)
        {
            ans+=b;
            ans=ans+b+1;
        }
        else
        {
            ans+=d;
            ans=ans+(d-1);
        }
        cout<<ans<<endl;

    }
    return 0;
}


