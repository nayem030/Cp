#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    stack<string>st;
    while(n--)
    {
        string s;
        cin>>s;
        st.push(s);
    }
    map<string,bool>mp;
    while(!st.empty())
    {
        if(!mp[st.top()])
        {
            cout<<st.top().substr(st.top().size()-2);
            mp[st.top()]=true;
        }
        st.pop();
    }
    return 0;
}
