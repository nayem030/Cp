#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    int sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    int ans=sum;
    for (int i=0;i<(1<<n);i++)
    {
        int s=0;
        for (int j=0;j<n;j++)
        {
            if((1<<j)&i)s+=a[j];
        }
        ans = min(ans, abs(sum-s*2));
    }
    cout<<ans<<endl;
}
