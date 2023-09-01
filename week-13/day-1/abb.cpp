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
        string s;
        cin>>s;
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            if(st.size()==0)
            {
                st.push(s[i]);
                continue;
            }
            if(s[i]=='B' and (st.top()=='A' || st.top()=='B'))
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }

        }
        cout<<st.size()<<endl;
    }
    return 0;
}
