#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int ans=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(a[i]<k)
            {
                ans=min(ans,(abs(k-a[i])));
            }
            else if(a[i]>k)
            {
                int x=k;
                while(x<a[i])
                {
                    x+=k;
                }
                ans=min(ans,(abs(a[i]-x)));
            }
            else
            {
                ans=0;
                break;
            }
        }
        cout<<ans<<endl;
    }
}
