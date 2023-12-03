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
    for(int i=0;i<k;i++)
    {
        int x;
        cin>>x;
        int l=-1,r=n;
        int index=0;
        while(l+1<r)
        {
            int mid=l+(r-l)/2;
            if(a[mid]<x)
            {
                l=mid;
            }
            else
            {
                r=mid;

            }
        }
        cout<<r+1<<endl;
    }
    return 0;
}

