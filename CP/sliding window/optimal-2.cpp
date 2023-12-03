#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int i=0,j=0;
    int ans=INT_MIN;
    int s=0;
    while(j<n)
    {
        s+=a[j];
        if(j<k-1)
        {
            j++;
        }
        else
        {
            ans=max(ans,s);
            s-=a[i];
            i++;
            j++;
        }
    }
    cout<<ans<<endl;
}
