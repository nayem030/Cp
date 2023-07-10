#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t,i,p=1;
    cin>>t;
    while(t--)
    {
        long long des,lan,t1,t2;
        cin>>des>>lan>>t1>>t2;
        if(des-p==t2-t1)
        {
            cout<<0<<endl;
            continue;
        }
        if(lan==t1 && t1==t2)
        {
            cout<<0<<endl;
            continue;
        }
        long long ans=des/lan;
        ans=ans-(t2/lan)+(t1/lan);
        cout<<ans<<endl;
    }
}
