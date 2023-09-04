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
        string s;
        cin>>s;
        vector<int>visited(n+1,0);
        s="a"+s;
        for(int i=1;i<=n;i++)
        {
            if(s[i]=='1')
            {
                visited[i]=2;
            }
        }
        ll k=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=i;j<=n;j+=i)
            {
                if(visited[j]==0)
                {
                    visited[j]=1;
                    k+=i;
                }
                else if(visited[j]==2)
                {
                    break;
                }
            }
        }
        cout<<k<<endl;
    }
    return 0;
}
