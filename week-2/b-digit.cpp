#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int ans=0;
    while(n>0)
    {
        ans++;
        n=n/k;
    }
    cout<<ans;
    return 0;
}
