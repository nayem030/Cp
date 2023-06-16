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
        long long int ar[n+1];
        for(long long int i=1;i<=n;i++)
        {
            cin>>ar[i];
        }
       long long int mn=LONG_LONG_MAX;
        for(long long int i=1;i<=n;i++)
        {

            for(long long int j=i+1;j<=n;j++)
            {
                mn=min(mn,ar[i]+ar[j]+j-i);
            }
        }
        cout<<mn<<"\n";
    }
    return 0;
}
