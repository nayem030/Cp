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
    if(prime[n]==0)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    return 0;
}
