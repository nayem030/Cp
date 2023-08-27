#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n&1)
    {
        n=n/2;
        n--;
        cout<<n+1<<endl<<3<<" ";
    }
    else
    {
        cout<<n/2<<endl;
        n=n/2;
    }
    for(int i=0;i<n;i++)
    {
        cout<<2<<" ";
    }
    cout<<endl;
    return 0;
}
