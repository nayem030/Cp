#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long l,r,x;
        cin>>l>>r>>x;
        long long a,b;
        cin>>a>>b;
        if(a==b)
        {
            cout<<0<<endl;
            continue;
        }
        if(abs(b-a)>=x)
        {
            cout<<1<<endl;
            continue;
        }
        if(a>b)
        {
            if(a+x<=r || b-x>=l)
            {
                cout<<2<<endl;
            }
            else if(a-x>=l && r-b>=x)
            {
                cout<<3<<endl;

            }
            else
            {
                cout<<-1<<endl;
            }
        }
        else
        {
            if(b+x<=r or a-x>=l)
            {
                cout<<2<<endl;
            }
            else if(a+x<=r and b-l>=x)
            {
                cout<<3<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }
    }
    return 0;
}
