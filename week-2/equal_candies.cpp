#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int ar[n];
        for(long long int i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        long long m=ar[0];
        for(long long int i=1; i<n; i++)
        {
            if(ar[i]<m)
            {
                m=ar[i];
            }
        }

       long long  int ans=0;
        for(long long int i=0; i<n; i++)
        {
            ans=ans+(ar[i]-m);


        }
        cout<<ans<<endl;
    }
    return 0;
}
