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
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
           cin>>a[i];
        }
        a.resize(unique(a.begin(),a.end())-a.begin());
        int ans=0;
        for(int i=0;i<a.size();i++)
        {
           if(i==0 || i==a.size()-1 || (a[i]>a[i-1] && a[i]>a[i+1]) || (a[i]<a[i-1] && a[i]<a[i+1]))
           {
               ans++;
           }
        }
        cout<<ans<<endl;
    }
    return 0;
}

