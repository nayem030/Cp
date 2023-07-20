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
        double x,y;
        cin>>x>>y;
        double xp=x/2;
        double yp=y/4;
        if(xp>yp)
        {
            cout<<(int)(x+8*yp)<<endl;
        }
        else if(yp>xp)
        {
            cout<<(int)(xp*6+y)<<endl;
        }
        else
        {
            cout<<(int)(xp*10)<<endl;
        }
    }
    return 0;
}
