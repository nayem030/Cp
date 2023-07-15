#include<bits/stdc++.h>
using namespace std;
long long factorial(long long k)
{
    if(k<=1)
    {
        return 1;
    }
    return k*factorial(k-1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        long long ans=(long long)(pow(k,n));
        if(n>=k)
        {
            cout<<factorial(k)<<endl;;
        }
        else
        {
            cout<<factorial(k)/factorial(k-n)<<endl;
        }

    }

}
