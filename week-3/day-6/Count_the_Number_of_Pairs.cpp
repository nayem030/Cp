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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int ans=0;
        map<char,int>fre;
        for(auto c:s)
        {
            fre[c]++;
        }
        for(char c='a';c<='z';c++)
        {
            int mini=min(fre[c],fre[c-32]);
            ans+=mini;
            fre[c]-=mini;
            fre[c-32]-=mini;
        }
        for(char c='a';c<='z';c++)
        {
            int mx=max(fre[c],fre[c-32]);
            int mini=min(k,mx/2);
            ans+=mini;
            k-=mini;
        }
        cout<<ans<<endl;
    }
    return 0;
}
