#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s[0]!='Y' && s[0]!='y')
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(s[1]!='E' && s[1]!='e')
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(s[2]!='S' && s[2]!='s')
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;

    }
    return 0;
}
