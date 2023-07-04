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
        set<char>st;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            st.insert(s[i]);
            if(st.size()>3)
            {
                ans++;
                st.clear();
                st.insert(s[i]);
            }
        }
        if(!st.empty())
        {
            ans++;
        }
        cout<<ans<<endl;

    }
}
