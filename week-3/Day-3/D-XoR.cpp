#include<bits/stdc++.h>
using namespace std;
long long findXOR(long long n)
{
    long long rem=n%4;
    if(rem==0)return n;
    if(rem==1)return 1;
    if(rem==2)return n+1;
    if(rem==3)return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long a,b;
    cin>>a>>b;
    long long x=findXOR(a-1)^findXOR(b);
    cout<<x;
}
