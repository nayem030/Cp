#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long p=2;
        if(n%p==0)
        {
            cout<<(n/p)-1<<endl;
        }
        else
        {
            cout<<n/p<<endl;
        }
    }
    return 0;
}
