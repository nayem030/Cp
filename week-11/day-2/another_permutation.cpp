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
        vector<int>a(n+1);
        vector<int>ans;
        for(int i=1;i<=n;i++)
        {
            if(a[i])
            {
                continue;
            }
            int now=i;
            while(now<=n)
            {
                if(a[now])
                {
                    break;
                }
                a[now]=1;
                ans.push_back(now);
                now*=2;
            }
        }
        for(auto it:ans)
        {
            cout<<it<<" ";
        }
        cout<<endl;


    }
    return 0;
}

