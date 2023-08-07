#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        int x=n/2;
        int y=x+1;
        if(a>y || b<x)cout<<"-1"<<endl;
        else if((a==y && b!=x) || (b==x && a!=y))
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<a<<" ";
            for(int i=y; i<=n; i++)
            {
                if(i==b || i==a)continue;
                cout<<i<<" ";
            }
            cout<<b<<" ";
            for(int i=1; i<=x; i++)
            {
                if(i==a || i==b)continue;
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}


