#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    cin>>n>>k;
    long long int i=1;
    long long int cnt=0;
    while(n<=k)
    {
        cnt++;
        n=2*n;

    }
    cout<<cnt;
}
