#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,pair<int,long long>>x,pair<int,pair<int,long long>>y)
{
    if(x.second.first==y.second.first && x.second.second==y.second.second )
    {
        return x.first<y.first;
    }
    else if(x.second.first==y.second.first)
    {
         return x.second.second<y.second.second;
    }
    return x.second.first>y.second.first;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int test;
    cin>>test;
    while(test--)
    {
        int n,m,h;
        cin>>n>>m>>h;
        vector<vector<int>>a;
        for(int i=0; i<n; i++)
        {
            vector<int>t;
            for(int j=0; j<m; j++)
            {
                int in;
                cin>>in;
                t.push_back(in);
            }
            sort(t.begin(),t.end());

            a.push_back(t);
        }
        vector<pair<int,pair<int,long long>>>vp;
        for(int i=0; i<n; i++)
        {
            int point=0,tot=0;
            long long penalty=0;
            vector<long long >p;
            for(int j=0; j<m; j++)
            {
                if(tot+a[i][j]>h)
                {
                    break;
                }
                point++;
                if(j==0)
                {
                    p.push_back(a[i][j]);
                }
                else
                {
                    p.push_back(p.back()+a[i][j]);
                }
                tot+=a[i][j];
            }
            for(auto now:p)
            {
                penalty+=now;
            }
            vp.push_back({i,{point,penalty}});
        }
        sort(vp.begin(),vp.end(),cmp);
        int ans=1;
        for(auto it:vp)
        {
            if(it.first==0)
            {
                break;
            }
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}

