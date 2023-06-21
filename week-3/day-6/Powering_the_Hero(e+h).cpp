#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long>ar(n);
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        long long ans=0;
        priority_queue<long long >pq;
        for(int i=0;i<n;i++)
        {
            if(ar[i]==0)
            {
                if(pq.empty())continue;
                ans+=pq.top();
                pq.pop();

            }
            else
            {
                pq.push(ar[i]);
            }
        }
        cout<<ans<<endl;
    }
}
