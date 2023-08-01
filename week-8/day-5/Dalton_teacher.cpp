#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            if(x==i)
            {
                ans++;
            }
        }
        cout<<(ans/2)+(ans%2)<<endl;
    }
    return 0;
}

