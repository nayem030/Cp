#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool cmp(pair<int,int>x,pair<int,int>y)
{
    if(x.first==y.first)
    {
        return x.second<y.second;
    }
    return x.first>y.first;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<pair<int ,int>>p;
        vector<int>ans;
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            if(x%k==0)
            {
                ans.push_back(i);
            }
            else
            {
                 p.push_back({x%k,i});

            }

        }

        sort(p.begin(),p.end(),cmp);
        for(auto it:p)
        {

            ans.push_back(it.second);
        }
        for(auto it:ans)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}

