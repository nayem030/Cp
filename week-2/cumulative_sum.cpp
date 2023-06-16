#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
   long long  int ar[n];
    for(long long int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
   long long int k;
    cin>>k;
    while(k--)
    {
       long long  int l,m;
        cin>>l>>m;
        long long int sum=0;
        for(int i=l;i<=m;i++)
        {
            sum+=ar[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
