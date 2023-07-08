#include<bits/stdc++.h>
using namespace std;
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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(abs(v[i]-v[j])==1 and i!=j)
                {
                    ans=2;
                    break;
                }
            }
        }
        if(ans==0)cout<<1<<endl;
        else cout<<2<<endl;
    }
    return 0;
}
