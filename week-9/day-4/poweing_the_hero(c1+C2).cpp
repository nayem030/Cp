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
        vector<ll>a(n);
        for(int i=0;i<n;i++)
        {
           cin>>a[i];
        }
        priority_queue<ll>pq;
        ll ans=0;
        for(int i=0;i<n;i++)
        {
           if(a[i]==0)
           {
              if(pq.empty())
              {
                  continue;
              }
              ans+=pq.top();
              pq.pop();
           }
           else
           {
               pq.push(a[i]);
           }
        }
        cout<<ans<<endl;
    }
    return 0;
}

