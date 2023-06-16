#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,k;
    cin>>n>>k;
    vector<long long int >ar(n);
    for(long long int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    long long int i=0,j=0;
    long long int sum=0;
    long long int ans=0;
    while(j<n)
    {
        sum+=ar[j];
        if(sum>k)
        {
            while(sum>k)
            {
                sum-=ar[i];
                i++;
            }
        }
        if(sum==k)
        {
            ans=max(ans,j-i+1);
        }
        j++;
    }
    cout<<ans<<endl;
    return 0;

}
