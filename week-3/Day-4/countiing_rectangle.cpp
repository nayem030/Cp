#include<bits/stdc++.h>
using namespace std;
long long ar[1005][1005];
long long pre[1005][1005];
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,q;
        cin>>n>>q;
        for(long long i=0;i<=1001;i++)
        {
            for(long long j=0;j<=1001;j++)
            {
                ar[i][j]=pre[i][j]=0;
            }
        }
        for(long long i=0; i<n; i++)
        {
            long long h,w;
            cin>>h>>w;
            ar[h][w]+=h*w;

        }
        for(long long i=1; i<=1000; i++)
        {
            for(long long j=1; j<=1000; j++)
            {
                pre[i][j]=pre[i][j-1]+pre[i-1][j]-pre[i-1][j-1]+ar[i][j];
            }
        }
        while(q--)
        {
            long long h1,w1,h2,w2;
            cin>>h1>>w1>>h2>>w2;
            cout<<pre[h2-1][w2-1]-pre[h2-1][w1]-pre[h1][w2-1]+pre[h1][w1]<<endl;

        }
    }
    return 0;
}
