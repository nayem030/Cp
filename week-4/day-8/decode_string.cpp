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
        int n;
        cin>>n;
        string s;
        cin>>s;
        list<char>l;
        int i=s.size()-1;
        while(i>=0)
        {
            if(s[i]=='0')
            {
                int n1=(int)(s[i-1]-'0');
                int n2=(int)(s[i-2]-'0');
                char ch=96+(n2*10+n1);
                l.push_front(ch);
                i=i-2;
            }
            else
            {
                int n1=(int)(s[i]-'0');
                char ch=96+n1;
                l.push_front(ch);
            }
            i--;
        }
        for(auto it:l)
        {
            cout<<it;
        }
        cout<<endl;
    }
}
