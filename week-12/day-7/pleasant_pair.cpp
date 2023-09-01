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
        vector<int>a(n+1,0);
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        int ans=0;
        for(int i=2;i<=n;i++)
        {
            int v=i+i-1;
            if(a[i]>v)
            {
                continue;
            }
            int x=(v%a[i]+1);
            int y=i-x;
            while(y>=1)
            {
                if(y+i==a[i]*a[y])ans++;
                y-=a[i];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
