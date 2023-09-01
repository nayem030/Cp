#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int ans=0;
        for(int sum=1;sum<=100;sum++)
        {
            int cnt=0;
            for(int i=0,j=n-1;i<j;)
            {
                if(a[i]+a[j]>sum)
                {
                    j--;
                }
                else if(a[i]+a[j]<sum)
                {
                    i++;
                }
                else
                {
                    i++;
                    j--;
                    cnt++;
                }
            }
            ans=max(ans,cnt);
        }
        cout<<ans<<endl;
    }
    return 0;
}
