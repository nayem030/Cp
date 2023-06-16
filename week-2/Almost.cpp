#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int prime[n+3];
    memset(prime,0,sizeof(prime));
    for(int i=2;i*i<=n;i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                prime[j]=1;
            }
        }
    }
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        int c=0;

        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                if(prime[j]==0 && j!=1)
                {
                    c++;
                }
            }
        }
        if(c==2)
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}

