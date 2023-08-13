#include<bits/stdc++.h>
using namespace std;
const int  mod=1e9+7;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>a(n);
        set<ll>st;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            st.insert(a[i]);
        }
        sort(a.begin(),a.end());
        if(st.size()==1)
        {
            cout<<-1<<endl;
            continue;
        }
        vector<ll>c;
        vector<ll>b;
        c.push_back(a[n-1]);
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]==c.back())
            {
                c.push_back(a[i]);
            }
            else
            {
                b.push_back(a[i]);
            }
        }
        sort(b.begin(),b.end());
        cout<<b.size()<<" "<<c.size()<<endl;
        for(auto it:b)
        {
            cout<<it<<" ";
        }
        cout<<endl;
        for(auto it: c)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
}

