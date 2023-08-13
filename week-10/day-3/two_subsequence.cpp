#include<bits/stdc++.h>
using namespace std;
const int  mod=1e9+7;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        char a='z';
        string b;
        for(int i=0;i<s.size();i++)
        {
            a=min(a,s[i]);
        }
        int ok=true;
        for(int i=0;i<s.size();i++)
        {
            if(ok)
            {
                if(s[i]==a)
                {
                    ok=false;
                    continue;
                }
                else
                {
                    b+=s[i];
                }
            }
            else
            {
                 b+=s[i];
            }
        }
        cout<<a<<" "<<b<<endl;
    }
}

