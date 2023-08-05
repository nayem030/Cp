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
       string s="#";
       for(int i=0;i<n;i++)
       {
           s+="BAN";
       }
       n=s.size()-1;
       vector<pair<int,int>>ans;
       int l=2,r=n;
       while(l<r)
       {
           ans.push_back({l,r});
           l+=3;
           r-=3;
       }
       cout<<ans.size()<<endl;
       for(auto it: ans)
       {
           cout<<it.first<<" "<<it.second<<endl;
       }
    }
    return 0;
}

