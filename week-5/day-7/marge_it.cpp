#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(3);
        for(int i=0;i<n;i++)
        {

            int x;
            cin>>x;
            a[x%3]++;

        }
        int mn=min(a[1],a[2]);
        int ans=a[0]+mn;
        a[1]-=mn,a[2]-=mn;
        ans=ans+((a[1]+a[2])/3);
        cout<<ans<<endl;
    }
}
