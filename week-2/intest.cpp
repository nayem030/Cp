#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        int in;
        cin>>in;
        if(in%k==0)
        {
            cnt++;
        }
    }
    cout<<cnt;
}
