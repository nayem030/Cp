#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int ans=0;
    if(a==b)
    {
        cout<<a+b;
        return 0;
    }
    else
    {
        int i=2;
        while(i--)
        {
             if(a>b)
             {
                 ans+=a;
                 a--;
             }
             else
             {
                 ans+=b;
                 b--;
             }
        }
         cout<<ans;
    }

}
