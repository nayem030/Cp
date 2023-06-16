#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int ar[100005]={0};
    for(int i=0;i<n;i++)
    {
        int in;
        cin>>in;
        ar[in]++;
    }
    for(int i=1;i<=k;i++)
    {
       cout<<ar[i]<<endl;
    }
    return 0;
}
