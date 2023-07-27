#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector<int>a(n+1);
    vector<pair<int,int>>vp;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        vp.push_back({a[i],i});
    }
    int ans=0;
    vector<int>ans_v;
    sort(vp.begin(),vp.end());
    int j=0;
    for(int i=vp.size()-1;i>=0;i--)
    {
        int n1=vp[i].first;
        int n2 =vp[i].second;
        if(j==0)
        {
            ans=1;
            ans_v.push_back(n2);
             j++;
            continue;
        }
        ans=ans+((n1*j)+1);
        ans_v.push_back(n2);
        j++;
    }
    cout<<ans<<endl;
    for(auto it:ans_v)
    {
        cout<<it<<" ";
    }
    return 0;
}

