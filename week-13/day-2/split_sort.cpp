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
        vector<int>a(n+1,0),pos(n+1,0);
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            pos[a[i]]=i;
        }
        int res=0;
        for(int i=2;i<=n;i++)
        {
            if(pos[i-1]>pos[i])
            {
                res++;
            }

        }
        cout<<res<<endl;
    }
    return 0;
}
