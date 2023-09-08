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
        int n,m;
        cin>>n>>m;
        if(n>m)
        {
            cout<<"NO"<<endl;
            continue;
        }
        vector<int>ans;
        if(n%2==0 and m%2==0)
        {
            cout<<"YES"<<endl;
            for(int i=0;i<n-2;i++)
            {
                ans.push_back(1);
                m--;
            }
            ans.push_back(m/2);
            ans.push_back(m/2);
        }
        else if(n%2==1 and m%2==0)
        {
            cout<<"YES"<<endl;
            for(int i=0;i<n-1;i++)
            {
                ans.push_back(1);
                m--;
            }
            ans.push_back(m);
        }
        else if(n%2==1 and m%2==1)
        {
            cout<<"YES"<<endl;
            for(int i=0;i<n-1;i++)
            {
                ans.push_back(1);
                m--;
            }
            ans.push_back(m);
        }
        else if(n%2==0 and m%2==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        for(auto e:ans)
        {
            cout<<e<<" ";
        }
        cout<<endl;
    }
    return 0;
}
