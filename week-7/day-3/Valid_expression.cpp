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
        int n,x;
        cin>>n>>x;
        string s;
        int t=1;
        while(n--)
        {
            if(t<x)
            {
                s.push_back('+');
                t+=1;
            }
            else if(t>x)
            {
                s.push_back('-');
                t-=1;
            }
            else
            {
                s.push_back('*');
            }
        }
        if(t==x)
        {
            cout<<s<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}
