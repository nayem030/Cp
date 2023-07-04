#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
void solve()
{
    string s(2,'.');
    int id=0;
    for(char ch='a';ch<='z';ch++)
    {
        for(char _ch='a';_ch<='z';_ch++)
        {
            if(ch==_ch)
            {
                continue;
            }
            s[0]=ch;
            s[1]=_ch;
            mp[s]=++id;
        }
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    solve();
    while(t--)
    {
        string s;
        cin>>s;
        cout<<mp[s]<<endl;

    }
    return 0;
}
