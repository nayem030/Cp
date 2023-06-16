#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int ans=0;
    int i=1;
    int j=i*a;
    while(j<=c)
    {
        ans+=b;
        i++;
        j=i*a;
    }
    cout<<ans;
}
