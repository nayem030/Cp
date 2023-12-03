#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int i=0,j=0;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans=0;
    long long s=0;
    while(j<n)
    {
        s+=a[j];
        if(s>k)
        {
            while(s>k)
            {
                s-=a[i];
                i++;
            }
        }
        if(s==k)
        {
            ans=max(ans,j-i+1);
        }
        j++;
    }
    cout<<ans<<endl;
    return 0;
}
