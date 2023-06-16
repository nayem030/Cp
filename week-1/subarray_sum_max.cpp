#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int mx=INT_MIN;
    int l=0,r=0;
    int sum=0;
    while(r<n)
    {
        sum+=arr[r];
        if(r-l+1<k)
        {
           r++;
        }
        else
        {
            cout<<sum<<" ";

            mx=max(mx,sum);
            sum-=arr[l];
            l++;
            r++;
        }
    }
    cout<<mx<<"\n";
}
