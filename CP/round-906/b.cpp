#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
bool ok(string s)
{
    for(int i=1;i<s.size();i++)
    {
        if(s[i]==s[i-1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int l1,l2;
        string s,t;
        cin>>l1>>l2;
        cin>>s>>t;
        if(ok(s))
        {
            cout<<"YES"<<endl;
            continue;
        }
        if(!ok(t) || *t.begin()!=*t.rbegin())
        {
            cout<<"NO"<<endl;
            continue;
        }
        bool zz=false,oo=false;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1])
            {
                if(s[i]=='1')
                {
                    oo=true;
                }
                else
                {
                    zz=true;
                }
            }
        }
        if(oo and t[0]=='1')
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(zz and t[0]=='0')
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
    }
    return 0;

}

