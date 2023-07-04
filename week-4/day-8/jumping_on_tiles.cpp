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
        string s;
        cin>>s;
        char f=s[0];
        char l=s[s.size()-1];
        vector<pair<char,int>>order;
        if(f>l)
        {
            for(int i=0; i<s.size(); i++)
            {
                if(s[i]<=f && s[i]>=l)
                {
                    order.push_back({s[i],i});
                }
            }
        }
        else
        {
            for(int i=0; i<s.size(); i++)
            {
                if(s[i]>=f && s[i]<=l)
                {
                    order.push_back({s[i],i});
                }
            }
        }

        if(order.size()>2)
        {
            sort(order.begin()+1,order.begin()+(order.size()-2),[&](pair<char,int>a,pair<char,int>b)
            {
                if(s[0]>s[s.size()-1])
                {
                    return a.first>b.first;
                }
                return b.first>a.first;
            });
        }

        vector<int>ans;
        ans.push_back(1);
        int cost=0;
        for(int i=1; i<order.size()-1; i++)
        {
            cost+=abs(order[i].first-order[i+1].first);
            ans.push_back(i+1);
        }
        ans.push_back(s.size());
        cout<<cost<<" "<<ans.size()<<endl;
        for(auto i:ans)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
