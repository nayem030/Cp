#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        vector<int>b(105);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[a[i]]++;
        }
        int ans=INT_MAX;
        for(int i=1;i<=100;i++)
        {
            if(b[i])
            {
                int s=0;
                for(int j=0;j<n;j+=k)
                {
                    while(a[j]==i and j<n)
                    {
                        j++;
                    }
                    if(j!=n)
                    {
                        s++;
                    }
                }
                ans=min(ans,s);
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}
