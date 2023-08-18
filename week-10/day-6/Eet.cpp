#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
int hasing(string s,int base)
{
    int value=1;
    int ans=0;
    for(auto c:s)
    {
        int ascii=c-'a'+1;
        ans=ans+(((ascii%mod)*(value%mod))%mod);
        ans%=mod;
        value=((value%mod)*(base%mod))%mod;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    set<pair<int,int>>st;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        st.insert({hasing(s,2),hasing(s,3)});
    }
    int q;
    cin>>q;
    while(q--)
    {
        string s;
        cin>>s;
        if(st.count({hasing(s,2),hasing(s,3)})>0)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
    return 0;
}

