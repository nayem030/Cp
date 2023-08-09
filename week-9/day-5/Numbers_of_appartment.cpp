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
        int n;
        cin>>n;
        int a=0,b=0,c=0;
        if(n==1 || n==2 || n==4)
        {
            cout<<-1<<endl;
            continue;
        }
        c=n/7;
        n=n%7;
        if(n==1)
        {
            c=max(c-1,0);
            a=1;
            b=1;
        }
        else if(n==2)
        {
            c=max(c-1,0);
            a=3;
            b=0;
        }
        else if(n==3)
        {
            a=1;
            b=0;
        }
        else if(n==4)
        {
            c=max(c-1,0);
            a=2;
            b=1;
        }
        else if(n==5)
        {
            b=1;
            a=0;
        }
        else if(n==6)
        {
            a=2;
            b=0;
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    return 0;
}

