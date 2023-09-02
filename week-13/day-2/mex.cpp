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
        int n,k;
        cin>>n>>k;
        vector<int>a,v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        v=a;
        int m=n;
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            if(v[i]!=i)
            {
                m=i;
                break;
            }
        }
        int b;
        for(int i=0;i<n;i++)
        {
            b=a[i];
            a[i]=m;
            m=b;
        }
        a.push_back(m);
        int idx=(k-1)%(n+1);
        for(int i=(n+1)-idx;i<a.size();i++)
        {
            cout<<a[i]<<" ";
        }
        for(int i=0;i<n-idx;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}
