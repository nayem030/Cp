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
        int a,b,c,d;
        int ans=0;
        cin>>a>>b>>c>>d;
        if(a<b)ans++;
        if(a<c)ans++;
        if(a<d)ans++;
        cout<<ans<<endl;
    }
}
