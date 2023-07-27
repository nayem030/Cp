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
        multiset<int>s;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            s.insert(x);
        }
        auto it=s.begin();
        int value=*it;
        it++;
        int ans=0;
        while(it!=s.end())
        {
            int v=*it;
            if(v!=value)
            {
                ans++;
            }
            it++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
