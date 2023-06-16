#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    for(int i=0;i<=c;i++)
    {
        for(int j=0;j<=c;j++)
        {
            if(a*i+b*j==c)
            {
                cout<<"Yes";
                return 0;
            }
        }
    }
    cout<<"No";
    return 0;
}
