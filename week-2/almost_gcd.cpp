#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    int m=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        m=max(m,ar[i]);
    }
    int gcd=0,ans;
    for(int i=2;i<=m;i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(ar[j]%i==0)
            {
                cnt++;
            }


        if(gcd<cnt)
        {
            gcd=cnt;
            ans=i;
        }
    }
    }

     cout<<ans;
    return 0;
}
