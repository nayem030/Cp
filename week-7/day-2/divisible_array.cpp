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
        if(n&1)
        {
            for(int i=1;i<=n;i++)
            {
                cout<<i<<" ";
            }
        }
        else
        {
             for(int i=2,j=1;j<=n;i+=2,j++)
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
}
