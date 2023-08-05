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
        int n,m;
        cin>>n>>m;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            pq.push(x);
        }
        for(int i=0;i<m;i++)
        {
            int x;
            cin>>x;
            pq.pop();
            pq.push(x);
        }
        ll sum=0;
        while(!pq.empty())
        {
            sum+=pq.top();
            pq.pop();
        }
        cout<<sum<<endl;
    }
    return 0;
}

