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
        int n;
        cin>>n;
        map<char,int>mp;
        multiset<char>st;
        int sum=0;
        for(int i=0;i<s.size();i++)
        {
            st.insert(s[i]);
            mp[s[i]]++;
            sum=sum+((int)(s[i])-96);
        }
        if(sum<=n)
        {
            cout<<s<<endl;
            continue;
        }
        auto it=st.end();
        it--;
        while(sum>n)
        {
            char ch=*it;
            sum=sum-((int)ch-96);
            mp[ch]--;
            it--;

        }
        vector<char>ans;
        for(int i=0;i<s.size();i++)
        {

         if(mp[s[i]]!=0)
         {
             ans.push_back(s[i]);
             mp[s[i]]--;
         }
        }
        for(auto e:ans)
        {
            cout<<e;
        }
        cout<<endl;
    }
}
