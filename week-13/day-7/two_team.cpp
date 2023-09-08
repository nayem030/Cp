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
        map<int,int>mp;
        set<int>s;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
            mp[x]++;
            s.insert(x);
        }
        int mx=0;
        int distinct=s.size();
        for(auto it:mp)
        {
            mx=max(mx,it.second);
        }
        if(mx<distinct)
        {
            cout<<mx<<endl;
        }
        else if(distinct<mx)
        {
            cout<<distinct<<endl;
        }
        else
        {
            cout<<distinct-1<<endl;
        }

    }
    return 0;
}
