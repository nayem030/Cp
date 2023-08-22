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
        vector<int>a;
        vector<int >v(n+1,0);
        for(int i=1;i<=n;i++)
        {
            if(v[i]!=0)
            {
                continue;
            }
            int now=i;
            while(now<=n)
            {
                if(v[now]!=0)
                {
                    break;

                }
                a.push_back(now);
                v[now]=1;
                now*=2;
            }
        }
        for(auto it:a)
        {
            cout<<it<<" ";
        }
        cout<<endl;


    }
    return 0;
}

