#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        list<char>l;
        int p=s.size()-1;
        while(p>=0)
        {
            if(s[p]=='0')
            {
                int n1=(int)(s[p-1]-'0');
                int n2=(int)(s[p-2]-'0');
                char ch=96+(n2*10+n1);
                l.push_front(ch);
                p=p-2;
            }
            else
            {
                int n1=(int)(s[p]-'0');
                char ch=96+n1;
                l.push_front(ch);
            }
            p--;
        }
        for(auto e:l)
        {
            cout<<e;
        }
        cout<<endl;
    }
}
