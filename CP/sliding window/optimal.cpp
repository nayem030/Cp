#include<bits\stdc++.h>
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
    int s=0;
    int ans=INT_MIN;
    while(j<n)
    {
        if(j<k)
        {
            s+=a[j];
            j++;
        }
        else
        {
            ans=max(s,ans);
            s-=a[i];
            i++;
            s+=a[j];
            j++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
