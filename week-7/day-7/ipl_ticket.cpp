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
        int diff=a-b;
        if(diff<=0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<diff<<endl;
        }
    }
    return 0;
}

