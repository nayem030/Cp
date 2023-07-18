#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double n,m;
        cin>>n>>m;
        double onn=n-(n*0.1);
        if(onn<m)
        {
            cout<<"ONLINE\n";
        }
        else if(onn>m)
        {
            cout<<"DINING\n";
        }
        else
        {
            cout<<"EITHER\n";
        }
    }
    return 0;
}
