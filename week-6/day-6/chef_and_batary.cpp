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
        int a=n;
        int ans=0;
        if(n>50 )
        {
            while(n>50)
            {
                n=n-3;
                ans++;
            }
        }
        else if(n<50)
        {
            while(n<50)
            {
                n=n+2;
                ans++;
            }
        }
        else
        {
            cout<<0<<endl;
            continue;
        }
        int d=abs(n-50);
        if(d==1 && n==49)
        {
            ans+=3;
        }
        else if(d==1 and n==51)
        {
            ans+=2;
        }
        else if(d==2 and n==52)
        {
            ans+=4;
        }
        else if(d==2 and n==48)
        {
            ans+=1;
        }
        else
        {
            ans+=0;
        }
        cout<<ans<<endl;
    }
}

