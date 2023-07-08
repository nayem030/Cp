#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,x;
        cin>>n>>x;
        vector<long long>a(n);
        for(long long i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        long long ans=0;
        for(long long i=0; i<n; i++)
        {
            if(a[i]!=-1)
            {
                long long target=a[i]*x;
                int found=-1;
                int low=i+1;
                int high=n-1;
                while(high>=low)
                {

                    int mid=low+(high-low)/2;
                    if(a[mid]==target)
                    {
                        found=mid;
                        high=mid-1;
                    }
                    if(a[mid]<target)
                    {
                        low=mid+1;
                    }
                    else
                    {
                        high=mid-1;
                    }
                }
                if(found==-1)
                {
                    ans++;
                }
                else
                {
                    a[found]=-1;
                }

            }

        }
         cout<<ans<<endl;
    }
    return 0;
}
