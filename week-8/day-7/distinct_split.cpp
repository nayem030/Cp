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
        string s;
        cin>>s;
        vector<int>pre(n,0);
        vector<int>suf(n,0);
        set<char>st;
        for(int i=0;i<n;i++)
        {
            st.insert(s[i]);
            pre[i]=st.size();
        }
        st.clear();
        for(int i=n-1;i>=0;i--)
        {
            st.insert(s[i]);
            suf[i]=st.size();
        }
        int ans=0;
        for(int i=0;i<n-1;i++)
        {
            ans=max(ans,suf[i+1]+pre[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}

