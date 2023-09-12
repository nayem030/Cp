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
        vector<pair<int,int>>ans;
        for(int i=0;i<n;i++)
        {
            int x=a[i],k=i;
            bool f=false;
            for(int j=i+1;j<n;j++)
            {
                x^=a[j];
                if(x==0)
                {
                    k=j;
                    f=true;
                }
            }
            if(f)
            {
                ans.push_back({i+1,k+1});
            }
        }
        cout<<ans.size()<<endl;
        for(auto it:ans)
        {
            cout<<it.first<<" "<<it.second<<endl;
        }
    }
    return 0;
}
