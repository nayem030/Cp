#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n0=s[0]-'0';
        int n1=s[1]-'0';
        int n2=s[3]-'0';
        int n3=s[4]-'0';
        int p=n0*10+n1;
        int q=n2*10+n3;
        if( p<=12 && q>12)
        {
            cout<<"MM/DD/YYYY"<<endl;
        }
        else if(q<=12 && p>12)
        {
             cout<<"DD/MM/YYYY"<<endl;
        }
        else
        {
             cout<<"BOTH"<<endl;
        }
    }
}
