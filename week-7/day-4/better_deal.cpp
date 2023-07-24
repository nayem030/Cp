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
        int a,b;
        cin>>a>>b;
        int first=100-a;
        int second=200-2*b;
        if(first>second)
        {
            cout<<"SECOND"<<endl;
        }
        else if(second>first)
        {
            cout<<"FIRST"<<endl;
        }
        else
        {
            cout<<"BOTH"<<endl;
        }

    }
    return 0;
}

