#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        if(count(s.begin(),s.end(),'?')==0)
        {
            cout<<s<<endl;
            continue;
        }
        char ch='?';
        queue<int>q;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='?')
            {
                q.push(i);
                continue;
            }
            ch=s[i];
            while(!q.empty())
            {
                s[q.front()]=s[i];
                q.pop();
            }
        }
        char c='0';
        if(ch=='1')
        {
            c='1';
        }
        while(!q.empty())
        {
            s[q.front()]=c;
            q.pop();
        }
        cout<<s<<endl;
    }
    return 0;
}
