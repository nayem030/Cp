#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,y;
        cin>>x>>y;
        if(x&1)
        {
            x+=2;
        }
        else
        {
            x++;
        }
        long long sum=0;
        for(long long i=x;i<y;i=i+2)
        {
            sum+=i;
        }
        cout<<sum<<endl;
    }
}

