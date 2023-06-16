#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,t;
    cin>>s>>t;
    int v=max(s,t);
    int cnt=0;
    for(int i=0;i<=v;i++)
    {
        for(int j=0;j<=v;j++)
        {
            for(int k=0;k<=v;k++)
            {
                if(i+j+k<=s && i*j*k<=t)
                {
                    cnt++;
                }
                else
                {
                    break;
                }
            }
        }
    }
    cout<<cnt;
}
